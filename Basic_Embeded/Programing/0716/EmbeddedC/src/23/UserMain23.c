#pragma pack(1)
#include <stdio.h>
#include <stdint.h>

//
// 2차원 배열의 논리적인 가로 1줄을 액세스할 수 있는 포인터 타입
//

typedef struct _byte_2_t
{
    uint8_t d1;
	uint8_t d2;
} Byte_2_t; 	// 2 Bytes data


void User_Main()
{
    uint32_t arr[3][2];

    // 처음 참조에서 2 Bytes 타입 4개(8 Bytes)를 
	// 액세스하는 포인터 선언
    Byte_2_t (*ptr)[4] = arr; // warning

	
    *(uint32_t *)ptr[1] = 0xa5a5a5a5;

	
    printf("%#x \n", arr[1][0]);
}
