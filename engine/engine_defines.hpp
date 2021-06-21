#pragma once

#if defined(__WIN32__) || defined(_WIN32) || defined(__WIN64) || defined(__WIN64__)
#define _WIN
#elif defined(linux) || defined(__linux__) || defined(__LINUX) || defined(__LINUX__)
#define _LINUX
#endif

#define NOMINMAX
#ifdef min
#undef min
#endif
#ifdef max
#undef max
#endif

#ifdef _WIN
#include <Winsock2.h>
#include <Windows.h>
#include <Mswsock.h>
#include <Ws2tcpip.h>
#include <Mstcpip.h>

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "Kernel32.lib") // IOCP需要用到的动态链接库
#pragma comment(lib, "Mswsock.lib")
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <netdb.h>
#include <arpa/inet.h>

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/resource.h>
#include <sys/sysinfo.h>
#endif

enum LoopType
{
	LOOP_BLOCK = 1,
	LOOP_NONBLOCK = 2,
};

enum ServerType
{
	SERVER_NONE = 0,
	SERVER_MASTER = 1,
	SERVER_GAME = 2,
	SERVER_LOGIN = 3,
	SERVER_WORLD = 4,
	SERVER_GATE = 5,
	SERVER_CHAT = 6,
	SERVER_DB = 7,
	SERVER_MYSQL = 8,
	SERVER_REDIS = 9,
	SERVER_PLAYER = 10,
	SERVER_MAX = 11,
};

static constexpr int MAX_PROTOBUF_LEN = 0x7FFFFFFF;
static constexpr int BLOCK_SIZE = 4096;
static constexpr int RECV_BUFFER_SIZE = 10 * BLOCK_SIZE;
static constexpr int SEND_BUFFER_SIZE = 10 * BLOCK_SIZE;


#define ENGINE_LOG
#ifdef ENGINE_LOG
#include "logger.hpp"
#define ENGINE_DEBUG(fmt,...) LogUtil::debug(fmt,##__VA_ARGS__);
#else
#define ENGINE_DEBUG(fmt,...)
#endif

#include <cstddef>
#ifdef _WIN
using ssize_t = unsigned long;
#else
using ssize_t = std::size_t;
#endif