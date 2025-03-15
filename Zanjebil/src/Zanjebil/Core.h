#pragma once

#ifdef ZJ_PLATFORM_WINDOWS

    #ifdef ZJ_BUILD_DLL
          #define ZANJEBIL_API _declspec(dllexport)
    #else
          #define ZANJEBIL_API _declspec(dllimport)
    #endif 
    #else 
          #error ZANJEBIL only supports windows!

#endif 


