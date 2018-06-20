//중첩 구조체
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct Person
{
	char pName[30];
	int grade;
	struct Person* next;
		

}LINK;



typedef struct 
{
	int age;
	int *pin;

}PER;

typedef struct 
{
	char name[30];
	int grade;
	double avg;
	char *pName;
}Tennis;


void tennis1_Display();
void tennis1_insert();
void st_tennis_1();
void st_tennis_Display();
void st_tennis();
void Display();

int main(){
	int sIn=30;
	PER st={20,&sIn};

	// Display(&st);
	// st_tennis();
	// st_tennis_1();
	st_link();
}

void link_display(){

}

void link_insert(){
	struct Person *head=malloc(sizeof(PER));
	
	struct Person *node1=malloc(sizeof(PER));
	head->next=node1;
	
	node1.grade=3;
	node1.name="asd";
	node1.next=NULL;

}
void st_link(){
	PER p1,p2,p3;
	p1.next=&p2;
	p2.next=&p3;
	



	link_insert();
}

void tennis1_Display(Tennis **ptr){
	for (int i = 0; i < 3; ++i)
	{
		//직접 접근
		// printf("%s\n",(*ptr[i]).name );
		// printf("%d\n",(*ptr[i]).grade );
		// printf("%.1f\n",(*ptr[i]).avg );
		//간접 접근
		printf("%s\n",(ptr[i])->name );
		printf("%d\n",(ptr[i])->grade );
		printf("%.1f\n",(ptr[i])->avg );
		printf("%s\n",(ptr[i])->pName );
	}

}
void tennis1_insert(Tennis **ptr){
	for (int i = 0; i < 3; ++i)
	{
		char buff[30];
		//선생님 답안
		// Tennis *pNew =(Tennis*)malloc(sizeof(Tennis));
		// ptr[i]=pNew;
		 // 이렇게 해도됨


		// ptr[i]=(void*)malloc(sizeof(Tennis)); 안좋은 방법이다.
		//이렇게 하면 자동 형변환이 일어나서 누실이 생길수 있다.
		//이렇게 해도 돌아가는 이유는 자동 형변환이 일어나 버려서 실행이 되는것이다.
		//ptr은 이전 함수 에서 Tennis *ptr[3]; 이였으므로 자료형은 Tennis이다.
		// 때문에 그에 맞는 자료형으로 맞춰 줘야 한다.


		ptr[i]=(Tennis*)malloc(sizeof(Tennis));
		//형변환 시킬때도 일치 시켜주는게 좋음

		//직접 접근
		// scanf("%s",(*ptr[i]).name);
		// scanf("%d",&(*ptr[i]).grade);
		// scanf("%lf",&(*ptr[i]).avg);
		//간접 접근
		scanf("%s",(ptr[i])->name);
		scanf("%d",&(ptr[i])->grade);
		scanf("%lf",&(ptr[i])->avg);
		
		scanf("%s",buff);
		ptr[i]->pName=(char*)malloc(sizeof(buff)+1);
		strcpy(ptr[i]->pName,buff);

		/* code */
	}
	

}

void st_tennis_1(){
	Tennis *pAr[3];
	tennis1_insert(pAr);
	tennis1_Display(pAr);
}

void st_tennis_Display(Tennis **ptr){
	printf("직접 접근\n");
	for (int i = 0; i < 3; ++i)
	{

		printf("%s %d %.1f\n",(*ptr[i]).name,(*ptr[i]).grade,(*ptr[i]).avg);
	}
	printf("\n간접 접근\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("%s %d %.1f\n",ptr[i]->name,ptr[i]->grade,ptr[i]->avg);
	}

}

void st_tennis(){
	Tennis p1={"Hong",90,5.2};
	Tennis p2={"Kim",80,3.5};
	Tennis p3={"Park",70,2.8};
	Tennis *ptr[3]={&p1,&p2,&p3};
	printf("size of ptr: %lu\n",sizeof(ptr) );
	st_tennis_Display(ptr);
}


void Display(PER *ptr){
	//간접 접근
	printf("%d\n",ptr->age );
	printf("%d\n",*(ptr->pin) );
	printf("%d\n",*ptr->pin );

	//직접 접근
	printf("%d\n",(*ptr).age );
	printf("%d\n",*(*ptr).pin );


	// *(ptr->pin)(이건 값) != ptr->pin(이건 주소)

}