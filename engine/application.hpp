#pragma once

#include "com_lock.hpp"
#include <vector>
#include <string>

namespace Engine
{
	class Application
	{
	private:
		class controler
		{
		public:
			friend class Application;
			controler(void):m_state(state::none){}
			~controler(void) = default;
		public:
			void stop(void);
		private:
			bool start();
			void run();
			void yield();
			void resume();
		private:
			enum class state {none, running, stopping};
			std::atomic<state> m_state;
			std::mutex m_mutex;
			std::condition_variable m_cv;
		};
		using param_vec_t = std::vector<std::string>;
	public:
		Application(void) = default;
		~Application(void) = default;

		friend void on_signal(int sig);
		bool start(int param_num, char* params[]);
		void run();
	protected:
		virtual bool OnStart() { return true; }
		virtual void OnStop() {}

		const char* get_param(size_t n);
	private:
		void daemon();
		void hook_signal();
		static controler* get_controler(void)
		{
			static controler m_controler;
			return &m_controler;
		}
	private:
		param_vec_t m_params;
		static cond_t m_cond;
		static mutex_t m_mutex;
	};
}
