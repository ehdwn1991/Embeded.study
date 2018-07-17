#include <stdio.h>

//
// short circuit evaluation
//

int Is_Valid_Data(int *list, int size, int data)
{
    int i;

    for(i=0; i<size; i++)
        if(list[i] == data)
			return 1;

	
    return 0;
}


void User_Main()
{
    int i;
    int list[20] = { 
        49,6,37,55,58, 
        99,2,27,90,12,
        63,37,40,17,5, 
        31,20,29,40,20 
    };

    for(i=0; i<100+1; i++)
        if( (i % 3 == 0) && Is_Valid_Data(list, 20, i) ) // 좌측의 수식이 참일 경우에만 우측 수식 평가
        {
			// 0부터 100까지의 수 중에서
            // 3의 배수이면서 동시에 list에 존재하는 데이터일 경우
			printf("%2d is a muliple of 3, and data of arr 'list' \n", i);
        }
}
