#pragma once

// Macro to shift __declspec(dllexport) & __declspec(dllimport)
#ifdef LC_PLATFORM_WINDOWS
	#ifdef LC_BUILD_DLL
		#define LOCO_API __declspec(dllexport)
	#else 
		#define LOCO_API __declspec(dllimport)
	#endif
#else
	#error Currently only window available
#endif