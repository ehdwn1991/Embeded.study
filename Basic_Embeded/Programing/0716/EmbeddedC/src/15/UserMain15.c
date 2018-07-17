#include <stdio.h>

//
// 다양한 크기의 포인터 접근
//

void User_Main()
{
	// num의 주소를 0x8004번지라고 가정
	int num = 0x12345678;
	int *ptr = &num;
	short temp;
	
	/* [포인터의 덧셈, 간접 참조, 형 변환 이용]
	 * 0x8004부터 0x8005까지 2Bytes를 읽어
	 * temp(2Bytes공간)에 저장 */
	temp = *(short *)ptr;

	// 0x5678이 확인되면 성공
	printf("%#x \n", temp);
}
