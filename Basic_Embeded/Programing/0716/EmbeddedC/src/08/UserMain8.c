#include <stdio.h>

//
// 비트 연산
//

void User_Main()
{
    unsigned char data1 = 0xad;
	
    // data1의 [5:3]비트만 [110]으로 수정
    data1 &= ~(0x7<<3);
	data1 |= (0x6 << 3);
	
	
    // %x(16진수)로 출력한 결과 0xb5를 확인 
    printf("%#x \n", data1);
	
	
	
	
	
	unsigned char data2 = 'a';
	
    // 비트연산을 이용하여 대소문자를 변환
	data2 ^= 0x1 << 5;

    // %c(문자)로 출력한 결과 'A'를 확인
    printf("%c \n", data2);
}
