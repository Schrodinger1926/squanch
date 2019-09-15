#pragma once

#ifdef NUTSACK_PLATFORM_WINDOWS
   
    #ifdef NUTSACK_BUILD_DLL
        #define NUTSACK_API _declspec_(dllexport)

    #else
        #define NUTSACK_API _declspec_(dllimport)

    #endif

#else
    #define NUTSACK_API 

#endif
