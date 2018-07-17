#include <stdio.h>

//
// const int *ptr 와 int *const ptr
//

/* 실행하지 않고 컴파일 에러만 확인하는 예제 */
	
// ptr이 가리키는 대상의 값을 변경할 수 없는 const 
// ptr이 가리키는 방향(ptr변수에 저장될 주소값)은 변경할 수 있다
void Ex1(const int *ptr) 
{
	int otherObject;
	
	ptr = &otherObject; // (O)
	
	*ptr = 77; // (X)
}

// ptr에 저장된 것(주소)을 변경하지 못하게 하는 const
// 즉, ptr은 한 번 가리킨 대상을 끝까지 가리킨다
// 가리키는 대상의 값은 변경 가능하다
void Ex2(int *const ptr)
{
	int otherObject;
	
	*ptr = 77; // (O)
	
	ptr = &otherObject; // (X)
}

void User_Main()
{
    int data = 100;
	
	Ex1(&data);
	
	Ex2(&data);
}
