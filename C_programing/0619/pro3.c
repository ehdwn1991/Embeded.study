#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mem_del();
void Display_Data();
char *Input_Data();
void clearbuff();
int main(void)
{
	// 총 5명 까지만 저장 및 관리 하도록 구현


	int sel = 0;
	int count=0,max=5;
	char *q;
	char **p=(char**)malloc(sizeof(char*)*5);
	while(1)
	{
		printf("1.입력  2.출력  3.종료 \n");
		scanf("%d", &sel);
		clearbuff();
		switch(sel)
		{
			case 1 :
			p[count++]=Input_Data();  // 메모리 확보하고 데이터 저장
			if(max==count){
				printf("Memory increase\n");
				if((q=realloc(p,sizeof(char)*max))==NULL){
					//realloc이 문제가 많아서 사실상 잘 안쓰인다함.free할때 에러가 상당히 많이 발생!!
					printf("error\n");
				}
				max=max+max;
			}
			break;
			case 2 :
			Display_Data(p,count);  // 입력한 모든 정보를 출력
			break;
			case 3 :
			mem_del(p,count);  // 메모리 해제
			break;
		}
		if(sel == 3)
			break;
	}

	return 0;
}


void mem_del(char **p,int count){
	for (int i = 0; i < count; ++i)
	{
		free(*(p+i));
	}
	// free(p);
}

void Display_Data(char **p,int count){
	for (int i = 0; i < count; ++i)
	{
		printf("%s",*(p+i) );
	}
}


char *Input_Data(){
	char buff[100]={'\0'};
	fgets(buff,1024,stdin);
	char *name=(char*)malloc(strlen(buff)+1);
	strcpy(name,buff);
	return name;
}
// void Input_Data(int *count,char **p){
// 	char buff[100]={'\0'};
// 	fgets(buff,1024,stdin);
// 	char *name=(char*)malloc(sizeof(char)*strlen(buff));
// 	strcpy(name,buff);
// 	p[*count]=name;
// 	*(count)+=1;
// }

void clearbuff(){
	while(getchar()!=10);
}