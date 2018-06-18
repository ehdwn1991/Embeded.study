// 포인터 배열과 배열간의 복사와 출력

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Display1();
void Display2();
void mystrcpy();
int main(void)
{
	char* pStr[3] = {// 포인터 배열
		"Embedded",
		"Good",
		"Study"
	};

    char str[3][50];
	Display1(pStr,3);  // 포인터 배열의 모든 문자열 출력
	mystrcpy(pStr,str);   // 포인터 배열이 참조 하고 있는 문자열을  2차원 배열로 복사 

	
	Display2( str );  // 2차원 배열의 모든 문자열 출력
	return 0;
}


void mystrcpy(char **arr1,char (*arr2)[50]){
	// printf("size=>%lu\n",strlen(*(arr2+1)) );
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < strlen(*(arr1+i)); ++j)
		{
			arr2[i][j]=arr1[i][j];
		}
		arr2[i][strlen(*(arr1+i))]='\0';
	}


}

void Display1(char **arr,int row){ //version.1

	for (int i = 0; i < row; ++i)
	{
		printf("%s\n",*(arr+i) );
	}


}


void Display2(char (*arr)[50]){
	for (int i = 0; i < 3; ++i)
// 	{
		printf("%s\n",arr[i] );
// 	}

}