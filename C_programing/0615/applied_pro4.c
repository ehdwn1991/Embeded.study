// 두번째 문자열을 첫번째 배열 뒤에 붙이는 함수는 구현 하시요.
// 첫번째 문자열과 두번째 문자열 구별하기 위해 '#' 문자를 사이에 추가

#include <stdio.h>

void my_strcat(char* pF, char* pS);

int main(void)
{
	char Fir_str[100] = "embedded";
	char Sec_str[30] = " Programmer";

	my_strcat(Fir_str, Sec_str);

	printf("Fir_str : %s\n\n", Fir_str);    // embedded # Programmer 출력
	return 0;
}

void my_strcat(char* pF, char* pS)
{

	int idx=0,count=0;
	while(pF[idx++]!='\0');
	while(pS[count]!='\0'){
		// printf("ps: %c\n",pS[count] );
		pF[idx-1+count]=pS[count];
		count++;
	}

}