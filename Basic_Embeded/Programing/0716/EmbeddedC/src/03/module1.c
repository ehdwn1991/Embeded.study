#include <stdio.h>

void Func()
{
    static int num;

    num++;

    printf("Func() : %d \n", num);
}
