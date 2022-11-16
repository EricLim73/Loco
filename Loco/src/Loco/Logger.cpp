#include "Logger.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Loco {

	std::shared_ptr<spdlog::logger> Logger::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Logger::s_ClientLogger;

	void Logger::Init() {
		spdlog::set_pattern("%^[%T] %n: %v%$");	//	pattern set to " Time LoggerName: msg with color
		s_CoreLogger = spdlog::stdout_color_mt("LOCO");
		s_CoreLogger->set_level(spdlog::level::trace);
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}

}