#include <stdio.h>
#include "LibA.h"

//
// 함수 포인터의 활용
//

// 1. 원하는 동작을 구현
void MyEvent()
{
    printf("Plz call me.. \n");
}

void User_Main()
{
	// ...
	
	// 2. 구현한 동작(서브 루틴의 주소)을  (라이브러리 등의) 함수로 전달
    LibFunc(MyEvent);
}
