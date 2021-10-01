#include <core/logger.h>

int main(void)
{
    KFATAL("A test message: %f", 13.37f);
    KERROR("A test message: %f", 13.37f);
    KWARN("A test message: %f", 13.37f);
    KINFO("A test message: %f", 13.37f);
    KDEBUG("A test message: %f", 13.37f);
    KTRACE("A test message: %f", 13.37f);
    return (0);
}