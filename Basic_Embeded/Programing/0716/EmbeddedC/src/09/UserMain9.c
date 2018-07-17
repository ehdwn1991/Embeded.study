#include <stdio.h>

//
// 이진수 한 글자씩 출력
//

void User_Main()
{
    int i;
    unsigned char data = 0xad;


    // data의 Binary(10101101)를 printf로 1글자씩 출력
	
	/* 작성 */
    for(i=0; i<8; i++)
    {
		// 방법은 여러 가지
		
		/* 
		if( (data & 0x80>>i) == 0 )
			printf("0");
		
		else
			printf("1");
		*/
		
		
		/*
		printf("%c", data & (0x80>>i) ? 
			'1' : '0');
		*/
		
		printf("%d", (data >> 7-i) & 0x1);
    }
}
