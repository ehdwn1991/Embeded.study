#include <stdio.h>

int g_num;

void Func()
{
    g_num++;

    printf("<module1.c> g_num : %d \n", 
		g_num);
}
