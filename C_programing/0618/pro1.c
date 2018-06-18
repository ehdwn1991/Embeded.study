// kim이있는 문자열을 찾아서 그 개수력 출력력
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void input_string();
int out_string();
int main(){
	char str[3][100];
	int res=0;
	input_string(str);
	res=out_string("kim",str);
	printf("res:%d\n",res );


}

void input_string(char (*arr)[100]){
	// char *buf=(char*)malloc(sizeof(char)*1024);
	for (int i = 0; i < 3; ++i)
	{
		// fgets(buf,1024,stdin);
		
		// clearbuff();
		scanf("%s",arr[i]);
	}

}

int out_string(char *comp,char (*arr)[100]){
	int total=0;
	for (int i = 0; i < 3; ++i)
	{
		if(strcmp(comp,arr[i])==0){
			// printf("%d:%s\n",i,arr[i] );
			total++;
		}

	}
	return total;

}