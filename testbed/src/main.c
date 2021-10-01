#include <core/logger.h>
#include <core/asserts.h>

#include <stdio.h>

int main(void)
{
    KFATAL("A test message: %f", 13.37f);
    KERROR("A test message: %f", 13.37f);
    KWARN("A test message: %f", 13.37f);
    KINFO("A test message: %f", 13.37f);
    KDEBUG("A test message: %f", 13.37f);
    KTRACE("A test message: %f", 13.37f);
    printf("line: %d\n", __LINE__);
    printf("file: %s\n", __FILE__);

    KASSERT(1 == 2);

    return (0);
}