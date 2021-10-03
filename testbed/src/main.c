#include <core/asserts.h>
#include <core/logger.h>
#include <stdio.h>

// TODO: Test
#include <core/application.h>

int main(void) {
    application_config config = {100, 100, 480, 480, "Skyrim"};

    application_create(&config);
    application_run();

    return (0);
}