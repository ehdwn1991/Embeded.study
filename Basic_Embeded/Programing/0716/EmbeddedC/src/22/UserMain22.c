#include <stdio.h>
#include <stdint.h>

//
// 2차원 배열의 논리적인 가로 1줄을 액세스할 수 있는 포인터 타입
//

void User_Main()
{   
    // arr의 가로 길이는 논리적으로 8 Bytes
    uint32_t arr[3][2];

	
    // "1번 간접참조했을 때, 배열이 나온다" 라는
	// 의도가 있고 액세스할 크기가 같으면 
	// 같은 결과를 만들어준다 (당연히 컴파일 경고)
	// 32bit x [2] = 64bit x [1]
    uint64_t (*ptr)[1] = arr; // warning

	
    // 처음 간접 참조는 8Bytes를 액세스하고,
    // 두 번째 간접 참조는 4Bytes를 액세스하도록
	// 캐스팅하여 배열 1칸 접근
    *(uint32_t *)*ptr = -1; // 4294967295u
    
	
    printf("%u \n", arr[0][0]);
}
