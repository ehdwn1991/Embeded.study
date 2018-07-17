#include <stdio.h>

//
// 이 예제에서도 함수인자로서 배열 요소 크기 정보가 필요하다
//

void PrintArr_dim2(int (*ptr)[4], int size)
{
    int i, j;
	
    for(i=0; i<size; i++)
    {
        for(j=0; j<4; j++)
		{
            printf("[%d]", ptr[i][j]);
        }
		
        printf("\n");
    }
}

void User_Main()
{
    int arr[3][4] = {
        {11,12,13,14}, {15,16,17,18}, {19,20,21,22}
    };

    PrintArr_dim2(arr, 3);
}








#if 0
void PrintArr_dim2(int (*ptr)[3], int size)
{
    int i, j;
	
    for(i=0; i<size; i++)
    {
        for(j=0; j<3; j++)
		{
            printf("[%d]", ptr[i][j]);
        }
		
        printf("\n");
    }
}

void User_Main()
{
    int i, j;
    int arr[4][3] = {
        {11,12,13,14}, {15,16,17,18}, {19,20,21,22}
    };

    PrintArr_dim2(arr, 4);
}
#endif
