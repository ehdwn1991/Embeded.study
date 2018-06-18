// 2차원 배열의 대문자 개수 찾아서 출력
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find_UpAlpha(char (*pS)[50]);

int main(void)
{
    char str[3][50] = {
		"embeDded",
		"sTudy",
		"Good"
	};
	int num = 0;


	num = find_UpAlpha( str ); // 2차원 배열의 대문자의 개수를 찾아 리턴하는 함수 구현

	printf("num : %d\n", num);

	return 0;
}



int find_UpAlpha(char (*pS)[50])
{ 	int total=0;
	// printf("%lu\n",strlen(pS[0]) );
	for (int i = 0; i <3; ++i)
	{
		for (int j = 0; j < strlen(pS[i]); ++j)
		{
			if(pS[i][j]>='A'&&pS[i][j]<='Z')
				total++;

		}
	}


return total;
}
