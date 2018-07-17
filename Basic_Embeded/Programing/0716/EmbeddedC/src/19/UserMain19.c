#include <stdio.h>

//
// 함수 'call by value' VS 'call by reference'
//

#if 1
void Swap(int a, int b)
{
    int temp;
   
    temp = b;
    b = a;
    a = temp;
}

void User_Main()
{
    int a = 10, b = 20;
    
    Swap(a, b);
    printf("%d , %d \n", a, b);
}
#endif




#if 0
void Swap(int *pa, int *pb)
{
    int temp;
   
    temp = *pb;
    *pb = *pa;
    *pa = temp;
}

void User_Main()
{
    int a = 10, b = 20;
    
    Swap(&a, &b);
    printf("%d , %d \n", a, b);
}
#endif
