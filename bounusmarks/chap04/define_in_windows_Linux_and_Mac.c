#ifdef _WIN64
	//define something for windows(64-bits) 
#elif _WIN32 
	//define somethign for windows(32-bits) 
#elif __APPLE__ 
	#include "TargetConditionals.h"
	#if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULATOR
		//define something for simulator
	#elif TARGET_OS_IPHONE
		//define something for iphone
	#else 
		#define TARGET_OS_OSX 1
		//define something for OSX 
	#endif
#elif __linux
	//linux
#elif __unix //all unices not caught above
	//unix
#elif __posix
	// POSIX
#endif 
