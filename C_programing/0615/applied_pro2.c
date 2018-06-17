//특정 문자 찾기
#include <stdio.h>
int find_ch(char* pS);

int main(void)
{
	char buf[30] = "Hello Embedded";
	int num = 0;

	num = find_ch( buf );

	printf(" d 문자의 개수 : %d\n", num);

	return 0;
}




int find_ch(char* pS)
{
	int count=0;
	
     while(*pS++!='\0'){
     	if(*pS=='d')
     		count++;

     }

     return count;
}