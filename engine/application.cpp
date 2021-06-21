#include "application.hpp"
#include "engine_defines.hpp"
#include <signal.h>
#include <stdlib.h>
#ifdef _LINUX
#include <unistd.h>
#endif

#ifdef _WIN
#include <Windows.h>
#endif

namespace Engine
{
	void on_signal(int sig)
	{
		switch (sig)
		{
		case SIGINT:
		case SIGTERM:
#ifdef _WIN
		case SIGABRT:
		case SIGBREAK:
#endif		
			Application::get_controler()->stop();
			break;
		default:
			break;
		}
	}
	bool Application::start(int param_num, char* params[])
	{
		bool is_deamon = false;
		for (size_t i=0;i<param_num;i++)
		{
			if (strcmp(params[i], "-d") == 0 || strcmp(params[i], "-daemon") == 0)
				is_deamon = true;
			m_params.push_back(params[i]);
		}
		if (is_deamon)
			daemon();
		hook_signal();
		return OnStart();
	}

	void Application::run()
	{
		get_controler()->run();
		OnStop();
	}

	const char* Application::get_param(size_t n)
	{
		if (n>=m_params.size())
		{
			return nullptr;
		}
		return m_params[n].c_str();
	}

	void Application::daemon()
	{
#ifdef _LINUX
		int pid = fork();
		if (pid != 0)
		{
			_exit(-1);
		}
		setsid();
		fclose(stdin);
		fclose(stdout);
		fclose(stderr);
#endif
	}

	void Application::hook_signal()
	{
#ifndef _WIN
		signal(SIGHUP, SIG_IGN);
		signal(SIGPIPE, SIG_IGN);
		struct sigaction act;
		sigemptyset(&act.sa_mask);
		act.sa_flags = SA_NODEFER | SA_ONSTACK | SA_RESETHAND;
		act.sa_handler = on_signal;
		sigaction(SIGINT, &act, NULL);
		sigaction(SIGTERM, &act, NULL);
#else
		signal(SIGINT, on_signal);
		signal(SIGTERM, on_signal);
		signal(SIGABRT, on_signal);
		signal(SIGBREAK, on_signal);
#endif
	}

	void Application::controler::stop(void)
	{
		state exp = state::running;
		if (m_state.compare_exchange_strong(exp, state::stopping))
			resume();
	}

	bool Application::controler::start()
	{
		state exp = state::none;
		if (m_state.compare_exchange_strong(exp, state::running))
			return true;
		return false;
	}

	void Application::controler::run()
	{
		while (m_state != state::stopping)
			yield();
		m_state = state::none;
	}

	void Application::controler::yield()
	{
		std::unique_lock<std::mutex> lock(m_mutex);
		m_cv.wait(lock);
	}

	void Application::controler::resume()
	{
		m_cv.notify_all();
	}
}
