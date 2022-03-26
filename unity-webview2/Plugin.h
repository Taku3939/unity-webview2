#include "pch.h"
#ifndef UNITY_WEBVIEW2_PLUGIN_H
#define UNITY_WEBVIEW2_PLUGIN_H

#pragma once
#define DLLEXPORT _declspec (dllexport)
#define UNITY_INTERFACE_API __stdcall
class Plugin {
    // initialize
    DLLEXPORT void* UNITY_INTERFACE_API Create();
    DLLEXPORT void UNITY_INTERFACE_API Destroy(void* ptr);
    DLLEXPORT int UNITY_INTERFACE_API Multiply(void* ptr, int a, int b);
    DLLEXPORT void UNITY_INTERFACE_API Open(void* ptr);
    //DLLEXPORT void UNITY_INTERFACE_API Destroy(void* ptr);
};


#endif //UNITY_WEBVIEW2_PLUGIN_H
