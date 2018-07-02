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
int find_Node();
void Delete_Data();
void Input_Data();
void clear();
int main(void)
{
	LINK *pStart=NULL;
	int sel=0;
	int var=0;
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
			printf("Find data: ");
			scanf("%d",&var);
			printf("\n %dth node has %d\n",find_Node(var,pStart),var);  // 메모리 해제
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
// void Delete_Data(LINK **pD,int Nth_data){
// 	LINK *temp=*pD->next;
// 	for (int i = 0; i < Nth_data; ++i)
// 	{
// 		temp=temp->next;
// 	}


// }

int find_Node(int data,LINK *pD){
	LINK *temp=pD;
	int count=0;

	while(1){
		if(temp->age == data){
			return count;
		}
		if(temp->next!=NULL){
			return -1;
		}
		printf("count:%d  has: %d\n",count,temp->age );
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
	}
	else{

		while(point->next!=NULL){
			point=point->next;
		}
		point->next=pNew;
	}
	
	
}

void clear(){
	while(getchar()!=10);
}