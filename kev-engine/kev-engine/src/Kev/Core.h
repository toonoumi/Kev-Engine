#pragma once


#ifdef KEV_PLATFORM_WINDOWS
	#ifdef KEV_BUILD_DLL
		#define KEV_API __declspec(dllexport)
	#else
		#define KEV_API __declspec(dllimport)
	#endif
#else
	#error Kev only supports Windows
#endif