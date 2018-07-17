#include <stdio.h>

//
// 배열의 접근 방법
//

void Ex1()
{
    int arr[3] = {0};

    printf("%p , %p \n", arr, &arr[0]);

    printf("%d , %d \n", 
        sizeof(arr),
        sizeof(&arr[0]));
} 

void Ex2()
{
	int i;
    int arr[3] = {0, };
    
    arr[0] = 2;
    (arr)[1] = 4;
    (&arr[0])[2] = 6;

    for(i=0; i<3; i++)
        printf("arr[%d] = %d \n", i, arr[i]);
}


void User_Main()
{
	printf("---------- Ex1 ---------- \n");
    Ex1();
	
	printf("\n\n---------- Ex2 ---------- \n");
	Ex2();
}
