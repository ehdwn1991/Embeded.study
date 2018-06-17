// strcpy 구현
#include <stdio.h>

void my_strcpy(char* pS, char* pD );

int main(void)
{
	char src[100] = "Hello Embedded";
	char dest[100];

	my_strcpy( src, dest);

	printf ("dest: %s\n\n",dest );  // Hello Embedded 출력
	return 0;
}

void my_strcpy(char* pS, char* pD )
{

	while(*pS!='\0'){
		*pD=*pS;
		pD++;
		pS++;
	}
     /*  src 배열의 내용을 dest 배열에 복사하는 코드 구현 */




}