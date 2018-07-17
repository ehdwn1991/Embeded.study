#include <stdio.h>
#include "Swapper.h"

//
// void* 는 일반 변수, 배열, 포인터, 함수, 구조체를 포함한 모든 타입의 주소를 저장할 수 있다
//

int Add(int a, int b) 
{ 
	return a + b; 
} 

int Sub(int a, int b) 
{ 
	return a - b; 
} 

void User_Main()
{
    double d1 = 1.14, d2 = 3.14;
    int (*pf1)(int,int) = Add;
    int (*pf2)(int,int) = Sub;

    Swap_Ex(&d1, &d2, sizeof(d1));
    Swap_Ex(&pf1, &pf2, sizeof(pf1));

    printf("%.2f , %.2f \n", d1, d2);
    printf("result : %d \n", pf1(20,80));
}
