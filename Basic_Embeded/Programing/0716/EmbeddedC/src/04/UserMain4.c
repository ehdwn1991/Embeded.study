#include <stdio.h>

//
// extern int 참조
//

extern void Func();

int g_num = 20;

void User_Main()
{
    int i;

    for(i=0; i<5; i++)
        Func();

    printf("<UserMain4.c> g_num : %d \n", 
		g_num);
}
