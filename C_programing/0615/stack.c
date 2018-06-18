#include <stdio.h>
#include <stdlib.h>
// #include <malloc.h>
#define expand 5
void Push(int* pStk, int* pT);
int Pop(int* pStk, int* pT);
void DataDisplay(int *pStk, int* pT);
void clearbuff();
void isEmpty();
int expand_stack();
int main()
{
	// int Stack[5];
	int top = 0;
	int nMenu = 0;
	int delVal = 0;
	int max_element=0;
	int *Stack=(int*)malloc(sizeof(int)*expand);
	max_element=expand;

	while (1)
	{
		printf("============== 스택 구조 삽입/삭제 프로그램 ==============\n");
		printf("1. 데이터 삽입    2. 데이터 삭제   3. isEmpty?     4. 종료\n");
		printf("메뉴 선택 : ");
		scanf("%d", &nMenu);
		clearbuff();

		switch (nMenu)
		{
			case 1:
			if (top == max_element)
			{
				printf("스택 메모리 Overflow !!\n\n");
				DataDisplay(Stack, &top);
				printf("Memory increse %d byte\n\n",expand_stack(Stack,top,&max_element));

				break;
			}
			Push(Stack, &top);
			DataDisplay(Stack, &top);
			break;
			case 2:
			if (top == 0)
			{
				printf("스택 메모리 Underflow !!\n\n");

				DataDisplay(Stack, &top);
				break;
			}
			delVal = Pop(Stack, &top);
			printf("삭제된 데이터 : %d\n\n", delVal);
			DataDisplay(Stack, &top);
			break;
			case 3:
			isEmpty();
			break;
			case 4:
			printf("프로그램 종료\n");
			break;
		}
		if (nMenu == 3) break;

	}

	return 0;
}

int expand_stack(int *before_stack,int pT,int *limit_elements){
	int resize=0;
	// for (int i = 0; i < 5; ++i)
	// {
	// 	printf("%d ",before_stack[i]);
	// }
	// puts("");
	printf("\nresize:%d\n",pT);
	before_stack=(int*)realloc(before_stack,sizeof(int)*pT);
	*limit_elements+=(sizeof(int)*pT)+pT;
	return (sizeof(int)*pT)+pT;
}


void isEmpty(int *pStk,int *top){
	if(pStk[0]=='\0'){
		printf("Stack is empty\n");
	}
	else{
		printf("Stack is not empty\n");
		printf("Top elements is %d\n",*(top-1) );
	}



}

void Push(int* pStk, int* pT)
{	int input=0;
	scanf("%d",&input);
	
	if(*pT==0){
		pStk[*pT]=input;
		*pT+=1;
	}
	else{
		pStk[*pT]=input;
		*pT+=1;
	}
	clearbuff();
}

int Pop(int* pStk, int* pT)
{	int out=0;

	out=pStk[*pT-1];
	pStk[*pT-1]='\0';
	*pT-=1;


	return out;

}

void DataDisplay(int *pStk, int* pT)
{

	for (int i = 0; i < *pT; ++i)
	{
		if(i==0){
			printf("bottom=> %d ",pStk[i] );
		}
		else{
			printf("| %d ",pStk[i]);
		}

	if(i==*pT-1)printf("<=top");
	}
	printf("\nElements : %d\n",*pT);

}


void clearbuff(){
	while(getchar()!=10);

}