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
	int Stack[5];
	int top = 0;
	int nMenu = 0;
	int delVal = 0;
	int idex=0;
	int now_size=2;
	int *all_stack=(int*)malloc(sizeof(int)*5);
	for (int i = 0; i < 100; ++i)
	{
		all_stack[i]=i;
	}
	for (int i = 0; i < 100; ++i)
	{
		printf("%d \n", all_stack[i]);
	}
	printf("af: %d\n",expand_stack(all_stack,&now_size,top) );
	for (int i = 0; i < 10; ++i)
	{
		printf("%d \n", all_stack[i]);
	}
	// while (1)
	// {
	// 	printf("============== 스택 구조 삽입/삭제 프로그램 ==============\n");
	// 	printf("1. 데이터 삽입    2. 데이터 삭제   3. isEmpty?     4. 종료\n");
	// 	printf("메뉴 선택 : ");
	// 	scanf("%d", &nMenu);
	// 	clearbuff();

	// 	switch (nMenu)
	// 	{
	// 		case 1:
	// 		if (top == 5)
	// 		{
	// 			printf("스택 메모리 Overflow !!\n\n");
	// 			DataDisplay(Stack, &top);

	// 			break;
	// 		}
	// 		Push(Stack, &top);
	// 		DataDisplay(Stack, &top);
	// 		break;
	// 		case 2:
	// 		if (top == 0)
	// 		{
	// 			printf("스택 메모리 Underflow !!\n\n");

	// 			DataDisplay(Stack, &top);
	// 			break;
	// 		}
	// 		delVal = Pop(Stack, &top);
	// 		printf("삭제된 데이터 : %d\n\n", delVal);
	// 		DataDisplay(Stack, &top);
	// 		break;
	// 		case 3:
	// 		isEmpty();
	// 		break;
	// 		case 4:
	// 		printf("프로그램 종료\n");
	// 		break;
	// 	}
	// 	if (nMenu == 3) break;

	// }

	return 0;
}

int expand_stack(int *before_stack,int *size,int pT){
	int resize=0;
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ",before_stack[i]);
	}
	puts("");
	before_stack=(int*)realloc(before_stack,(sizeof(int)*(*size)));
	for (int i = 0; i < 5; ++i)
	{
		before_stack[i+5]=i+100;
	}
	resize=pT+*size;
	printf("asdasdasdad%d p:%d size: %d\n",resize,pT,*size );
	*size*=*size;
	return resize;
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