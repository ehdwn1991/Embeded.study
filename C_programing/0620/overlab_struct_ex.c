//중첩 구조체
#include <stdio.h>
#include <string.h>

typedef struct 
{
	int age;
	char name[30];
	char *pName;

}PER;

typedef struct
{
	int idx;
	PER nop[30];
}Em_class;

void direct();
void indirect();
int main(){
	Em_class st;
	Em_class* ptr=&st;
	printf("중첩 구조체의 예시입니다.\n");

	printf("직접접근 예시\n");
	//직접 접근
	// scanf("%d",&(*ptr).nop[0].age); //ok
	// printf("%d\n",(*ptr).nop[0].age );

	// scanf("%d",&st.nop[1].age); //ok
	// printf("%d\n",st.nop[1].age );

	// scanf("%s",(*ptr).nop[0].name);  //ok
	// strcpy((*ptr).nop[0].name,"asd");
	// printf("%s\n", (*ptr).nop[0].name);


	printf("간접 접근 예시\n");
	//간접 접근
	// scanf("%d",&ptr->nop[2].age);
	// printf("%d\n",(ptr)->nop[2].age );

	


	// direct(&st);
	indirect(&st);
}

//함수에서의 접근

void direct(Em_class *ptr){
	scanf("%d",&(*ptr).nop[0].age);
	printf("%d\n",(*ptr).nop[0].age );

	scanf("%s",(*ptr).nop[0].name);  
	printf("%s\n", (*ptr).nop[0].name);


}



void indirect(Em_class *ptr){
	char buff[100];
	// scanf("%s",ptr->nop[1].name);
	// printf("%s\n",ptr->nop[1].name );
	// printf("%c\n",ptr->[1].name);
	
	//pName은 애초에 포인터 상수 이기 떄문에 선언과 동시에 초기화 하지 안는 이상 데이터 못들어감
	//때문에 동적할당을 하여 주소를 연결해주면댐
	scanf("%s",buff);

	//정석적인 동적 할당 방법
	// char *s_buff=(char*)malloc(strlen(buff)+1);
	// strcpy(s_buff,buff);
	// ptr->nop[1].pName=s_buff;

	//응용 동적할당 방법(바로 pName에 주소 연결)
	//pName은 포인터 변수 이기 때문에 동적 할당 할때에 바로 연결해줘도 된다.
	ptr->nop[1].pName=(char*)malloc(strlen(buff)+1);
	strcpy(ptr->nop[1].pName,buff);


	printf("%s\n",ptr->nop[1].pName );
	printf("%c\n",ptr->nop[1].pName[2] );


}