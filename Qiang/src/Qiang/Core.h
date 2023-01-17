#pragma once
#ifdef QIANG_PLATFORM_WINDOWS
	#ifdef QIANG_BUILD_DLL
		#define QIANG_API __declspec(dllexport)
	#else
		#define QIANG_API __declspec(dllimport)
	#endif
#else
	#error "Qiang only support windows!
#endif