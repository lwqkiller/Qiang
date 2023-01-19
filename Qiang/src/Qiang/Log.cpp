#include "Log.h"
#include<memory>
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Qiang
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("Qiang");
		s_CoreLogger->set_level(spdlog::level::warn);

		s_ClientLogger = spdlog::stdout_color_mt("App");
		s_ClientLogger->set_level(spdlog::level::info);
	}
}
