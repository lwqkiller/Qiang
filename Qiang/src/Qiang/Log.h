#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"


namespace Qiang
{
	class QIANG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

//Core宏
//定义宏，使每次调用spdlog的函数美观
//格式这宏(....)参数  ::Qiang::Log::GetCoreLogger()->error(__VA_ARGS__)调用返回错函数
#define QE_CORE_ERROR(...) ::Qiang::Log::GetCoreLogger()->error(__VA_ARGS__)
#define QE_CORE_INFO(...)  ::Qiang::Log::GetCoreLogger()->info(__VA_ARGS__)
#define QE_CORE_WARN(...)  ::Qiang::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define QE_CORE_TRACE(...) ::Qiang::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define QE_CORE_FATAL(...) ::Qiang::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client宏
#define QE_ERROR(...)      ::Qiang::Log::GetClientLogger()->error(__VA_ARGS__)
#define QE_INFO(...)       ::Qiang::Log::GetClientLogger()->info(__VA_ARGS__)
#define QE_WARN(...)       ::Qiang::Log::GetClientLogger()->warn(__VA_ARGS__)
#define QE_TRACE(...)      ::Qiang::Log::GetClientLogger()->trace(__VA_ARGS__)
#define QE_FATAL(...)      ::Qiang::Log::GetClientLogger()->fatal(__VA_ARGS__)