//
// Created by Taku on 2022/03/25.
//


#include "pch.h"
extern "C" {
    DLLEXPORT
        void* UNITY_INTERFACE_API Create() {
        return new WebView2Unity();
    }

    DLLEXPORT
        void UNITY_INTERFACE_API Destroy(void* ptr) {
        WebView2Unity* webView = static_cast<WebView2Unity*>(ptr);
        delete webView;
    }

    DLLEXPORT
        int UNITY_INTERFACE_API Multiply(void* ptr, int a, int b) {
        WebView2Unity* webView = static_cast<WebView2Unity*>(ptr);
        int ans = webView->Multiply(a, b);
        return ans;
    }

    DLLEXPORT
        void UNITY_INTERFACE_API Open(void* ptr) {
        WebView2Unity* webView = static_cast<WebView2Unity*>(ptr);
        webView->Open();
    }
}