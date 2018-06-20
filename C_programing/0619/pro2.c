#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* Input();
void Display(char* pD);

int main(void)
{
	// 메인함수에는 배열 선언 금지.
	char *p=NULL;
	p=Input();   //  영문 이름을  입력 저장.
	Display(p);  // 입력 받은 영문 이름을 출력
	free(p);
	return 0;
}
void Display(char* pD)
{
	puts(pD);
}

char* Input()
{
	char *name=(char*)malloc(sizeof(char)*100);
	fgets(name,1024,stdin);
	return name;

}