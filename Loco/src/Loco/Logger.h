#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Loco {
	class LOCO_API Logger
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		//	Log.cpp에서 생성 (static 변수여서 가능)
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	
	};
}

#define LC_CORE_ERROR(...)	::Loco::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define LC_CORE_WARN(...)	::Loco::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define LC_CORE_INFO(...)	::Loco::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define LC_CORE_TRACE(...)	::Loco::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define LC_CORE_FATAL(...)	::Loco::Logger::GetCoreLogger()->critical(__VA_ARGS__)

#define LC_CLIENT_ERROR(...)	::Loco::Logger::GetClientLogger()->error(__VA_ARGS__)
#define LC_CLIENT_WARN(...)	::Loco::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define LC_CLIENT_INFO(...)	::Loco::Logger::GetClientLogger()->info(__VA_ARGS__)
#define LC_CLIENT_TRACE(...)	::Loco::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define LC_CLIENT_FATAL(...)	::Loco::Logger::GetClientLogger()->critical(__VA_ARGS__)
