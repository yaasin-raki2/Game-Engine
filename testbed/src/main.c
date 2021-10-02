#include <core/asserts.h>
#include <core/logger.h>
#include <stdio.h>

// TODO: Test
#include <platform/platform.h>

int main(void) {
    KFATAL("A test message: %f", 13.37f);
    KERROR("A test message: %f", 13.37f);
    KWARN("A test message: %f", 13.37f);
    KINFO("A test message: %f", 13.37f);
    KDEBUG("A test message: %f", 13.37f);
    KTRACE("A test message: %f", 13.37f);

    platform_state state;
    if (platform_startup(&state, "Vulkan Engine", 100, 100, 1280, 720)) {
        while (TRUE) {
            platform_pump_messages(&state);
        }
    }
    platform_shutdown(&state);

    return (0);
}