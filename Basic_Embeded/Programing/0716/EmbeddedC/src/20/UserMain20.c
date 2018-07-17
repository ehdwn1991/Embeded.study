#include <stdio.h>

//
// 함수의 인자로 전달된 배열의 크기를 알 수 있는 방법은 없다
//

#if 1
void Print_Arr(int *ptr)
{
    int i;
    int size;

    size = sizeof(ptr) / sizeof(ptr[0]);
    
    for(i=0; i<size; i++)
        printf("[%d]", ptr[i]);
}

void User_Main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    Print_Arr(arr);
}
#endif


#if 0
void Print_Arr(int *ptr, unsigned int size)
{
    int i;
	
    for(i=0; i<size; i++)
        printf("[%d]", ptr[i]);
}

void User_Main()
{
    int arr[7] = {1,2,3,4,5,6,7};
	unsigned int size = sizeof(arr) / sizeof(arr[0]);
	
    Print_Arr(arr, size);
}
#endif
