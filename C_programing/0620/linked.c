#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node
{
	char name[30];
	int age;
	char job[30];
	struct Node* next;		

}LINK;


void Display_Data();
void Delete_Data();
void Input_Data();
void clear();
int main(void)
{
	LINK *pStart=NULL;
	int sel=0;
	// Input_Data(&pStart);
	// // printf("%d\n",pStart->age );
	// Display_Data(pStart);
	while (1)
	{
		printf("1.입력  2.출력  3.종료 \n");
		scanf("%d", &sel);
		switch (sel)
		{
			case 1:
		    Input_Data(&pStart);  // 메모리 확보하고 데이터 저장
		    break;
		    case 2:
			Display_Data(pStart);  // 입력한 모든 정보를 출력
			break;
			case 3:
			// find_del();  // 메모리 해제
			break;
		}
		if (sel == 4)
			break;
	}
	return 0;
}

void Display_Data(LINK *pStr){
	LINK *point=pStr->next;

	while(point!=NULL){
	printf("name: %s  age: %d  job: %s\n",point->name,point->age,point->job );
		point=point->next;
	}


}
void Delete_Data(LINK **pD){
	LINK *temp=*pD;


}

int find_Node(int data,**pD){
	LINK *temp=*pD;
	int count=0;
	while(temp->next!=NULL){
		if(temp->age == date){
			return count;
		}

		temp=temp->next;
		count++;
		}
	
	return -1;
}

void Input_Data(LINK **pD){

	 //add node
	
	LINK *pNew=(LINK*)malloc(sizeof(LINK));
	
	// (*pD)->next=pNew;
	printf("name: ");
	scanf("%s",pNew->name);
	printf("age: ");
	scanf("%d",&pNew->age);
	printf("job: ");
	scanf("%s",pNew->job);
	pNew->next=NULL;



	LINK *point=(*pD);

	if(*pD==NULL){ //head
		LINK *head = (LINK*)malloc(sizeof(LINK));
		*pD=head;
		head->next=pNew;
		printf("asd\n");
	}
	else{

		while(point->next!=NULL){
			printf("b\n");
			point=point->next;
		}
		point->next=pNew;
	}
	
	
}

void clear(){
	while(getchar()!=10);
}