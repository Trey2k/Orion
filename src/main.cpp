/* Set platform defines at build time for volk to pick up. */
#if defined(_WIN32)
#   define VK_USE_PLATFORM_WIN32_KHR
#elif defined(__linux__) || defined(__unix__)
#   define VK_USE_PLATFORM_XLIB_KHR
#elif defined(__APPLE__)
#   define VK_USE_PLATFORM_MACOS_MVK
#else
#   error "Platform not supported."
#endif

#define VOLK_IMPLEMENTATION
#include "volk.h"
#include <iostream>

int main()
{
    std::cout << "Hello Vulkan!" << std::endl;
    return 0;
}