#include <stdio.h>

int add(int x, int y) { return x + y; }

void test()
{
    int i = 4;
    if (i > 3)
    {
        printf("yeah %d", i);
    }
    else
    {
        printf("nah");
    }
}