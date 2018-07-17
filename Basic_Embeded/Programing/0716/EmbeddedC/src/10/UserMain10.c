#include <stdio.h>
#include "../lib2450/Timer.h"
#include "test.h"

//
// 임베디드 키패드 제어
//

// 왼쪽 상단 3번째 스위치를 누르면 
// GPFDAT 레지스터의 4번 비트가 자동으로 0으로 바뀌도록 설정돼 있음
extern void Init_Key(void);





void Wait_KeyPressed(void)
{
	/* 작성 */
		
	// GPFDAT의 4번 비트가 0이 될 때 까지 대기
	while( (GPFDAT>>4) & 0x1 );
	
	printf("Pressed !!! \n");
}


void User_Main()
{
	Init_Key();
	
	while(1)
	{
		Wait_KeyPressed();
		
		Timer_Delay(500);	
	}
}
