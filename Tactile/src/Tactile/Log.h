#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Tactile
{
  
  class TACTILE_API Log
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

//core log macros
#define TT_CORE_FATAL(...)    ::Tactile::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define TT_CORE_ERROR(...)    ::Tactile::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TT_CORE_WARN(...)     ::Tactile::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TT_CORE_INFO(...)     ::Tactile::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TT_CORE_TRACE(...)    ::Tactile::Log::GetCoreLogger()->trace(__VA_ARGS__)

//client log macros
#define TT_FATAL(...)    ::Tactile::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define TT_ERROR(...)    ::Tactile::Log::GetClientLogger()->error(__VA_ARGS__)
#define TT_WARN(...)     ::Tactile::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TT_INFO(...)     ::Tactile::Log::GetClientLogger()->info(__VA_ARGS__)
#define TT_TRACE(...)    ::Tactile::Log::GetClientLogger()->trace(__VA_ARGS__)