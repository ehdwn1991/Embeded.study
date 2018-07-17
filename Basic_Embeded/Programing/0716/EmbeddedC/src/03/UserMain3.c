#include <stdio.h>

//
// local static int 참조
//

extern void Func();

int num;

void User_Main()
{
    int i;

    for(i=0; i<5; i++)
        Func();

    printf("main() : %d \n", num);
}
