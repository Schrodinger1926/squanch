#pragma once

#ifdef SQUANCH_PLATFORM_WINDOWS
   
    #ifdef SQUANCH_BUILD_DLL
        #define SQUANCH_API _declspec_(dllexport)

    #else
        #define SQUANCH_API _declspec_(dllimport)

    #endif

#else
    #define SQUANCH_API 

#endif
