#include <stdio.h>

//
// 배열의 바운더리 주의
//

void User_Main()
{
	unsigned char var = 7;
	unsigned char arr[3] = {1, 3, 5};

	arr[3] = arr[0];
	
	printf("arr[3] = %d \n", arr[3]);
	printf("&arr[3] = %p \n", &arr[3]);
	printf("&arr[2] = %p \n", &arr[2]);

	printf("var = %d \n", var);
	printf("&var = %p \n", &var);
}
