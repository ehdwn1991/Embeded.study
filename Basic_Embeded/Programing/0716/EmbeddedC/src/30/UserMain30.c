#include <stdio.h>

//
// void* 는 일반 변수, 배열, 포인터, 함수, 구조체를 포함한 모든 타입의 주소를 저장할 수 있다
//

void Ex1() 
{
    int i, j;
    char arr[4][3] = { 
        {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} 
    }; 

	// vp에 arr첫원소(1,2,3이 들어있는 1차원 배열)의 주소 저장
    void *vp = arr;
 
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("[%2d]",
                ( (char (*)[3])vp )[i][j] );
        }
        
        printf("\n");   
    }
}




void Ex2()
{
	int data = 77;
    int *p = &data;
    int **pp = &p;
    void *vp = pp; // vp에 int** 타입 저장 (p의 주소)
   
    printf("%d \n", **(int **)vp);
}



int Add(int a, int b) { return a + b; }
void Ex3()
{
	int result;
    void *vp = Add; // vp에 Add함수 주소 저장

    // vp를 참조하여 Add함수를 호출
    result = (*(int (*)(int,int))vp)(3,5);
    printf("%d \n", result);
}



void User_Main()
{
	printf("\n\n---------- Ex1 ---------- \n");
    Ex1();
	
	printf("\n\n---------- Ex2 ---------- \n");
	Ex2();
	
	printf("\n\n---------- Ex3 ---------- \n");
	Ex3();
}
