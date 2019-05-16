#pragma once

#ifdef TT_PLATFORM_WINDOWS
  #ifdef TT_BUILD_DLL
    #define TACTILE_API __declspec(dllexport)
  #else
    #define TACTILE_API __declspec(dllimport)
  #endif
#else
  #error Tactile only supports windows!
#endif