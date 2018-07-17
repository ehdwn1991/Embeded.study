#include <stdio.h>

//
// 배열 1칸의 주소와 배열 전체의 주소는 다르다
//

void User_Main()
{
    int arr[3] = {2, 4, 6};

	
    // 타입 일치
    // 배열 1칸의 시작 주소(&arr[0]) 대입
    int *ptr1 = arr;

	
    // 타입 불일치
    // 배열 3칸 전체를 가리키는 포인터로 변환 후 대입된다 (암시적 형 변환)
    // (int (*)[3])arr는 &arr와 완전히 동일
    int (*ptr2)[3] = arr; 

	
    // 비교 연산 결과는 타입이 달라도 값만 같으면 1
    if( ptr1 == ptr2 ) 
        printf("The same value, but different type \n");
    
	
	// ptr1과 ptr2는 다른 offset
    if( (ptr1 + 1) == (ptr2 + 1) ) 
        printf("Non executable code \n");
}
