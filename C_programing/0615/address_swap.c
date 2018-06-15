#include <stdio.h>

int main(){
	char *test;
	char *f;
	char *s;
	char swap_char;
	int temp=0x12345678;
	s=(char*)&temp; //4byte의 값을 1byte씩 접근
// a=(char)&temp; 변수 자료형의 형변환
	printf("temp fist: %x\n",temp );
	swap_char=*s;
	*s=*(s+3);
	*(s+3)=swap_char;

	swap_char=*(s+1);
	*(s+1)=*(s+2);
	*(s+2)=swap_char;

// printf("%x %x %x\n",*a,*(a+1),b );
	printf("temp second: %x\n",*s );
	printf("temp second: %x\n",temp );
}