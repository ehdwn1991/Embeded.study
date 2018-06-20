#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	int age;
	double pay;
	char name[30];
}PER;


struct NODE
{
	int data;
	struct NODE* next; 
};


void arr_input();
void arr_Display();
void arr_struct();
void Display();
void linked();
void input();
int main(){

	// PER p1;
	// // PER p1={30,55.23,"hihi hellow"};
	
	// p1.age =30;
	// p1.pay = 55.42;
	// strcpy(p1.name,"hellow it's me");
	
	// input(&p1);
	
	// Display(p1);
	// linked();
	arr_struct();

}

void arr_input(PER *p){
	for (int i = 0; i < 3; ++i)
	{
	// 여기서 간접접근 화살표 (->)를 써버리면 포인터가 꼬여 버린다.
	// 꼬여 버린다 라고 표현한 이유는 내부적으로는 문제 없다 물론 문법적으로도 문제 없다
	// 하지만 개발자가 헷갈리는 일이 발생할수도 있음.
	scanf("%d",&(p[i]).age);
	scanf("%lf",&(p[i]).pay);
	scanf("%s",(p[i]).name);
			/* code */
	}
		/* code */
}

void arr_Display(PER *p){
	for (int i = 0; i < 3; ++i)
	{
		printf("arr[%d]: age=>%d pay=>%f name=>%s\n",i,(*(p+i)).age,(*(p+i)).pay,(*(p+i)).name );
	}

}
void arr_struct(){
	//이예제는 구조체 배열의 예제
	PER arr[3];
	printf("지금 예제는 구조체 배열의 예제입니다.\n");
	arr_input(arr);
	printf("%d\n",arr[1].age );
	arr_Display(arr);
}

void input(PER *p1){
	(*p1).age =100;
	(*p1).pay = 100.42;
	// p1->age =100;
	// p1->pay = 100.42;
	printf("input: ");
	scanf("%s",(*p1).name);
	printf("input age: ");
	scanf("%d",&(*p1).age);

}
void linked(){
	struct NODE *head = malloc(sizeof(struct NODE));    // 머리 노드 생성
                                                        // 머리 노드는 데이터를 저장하지 않음

    struct NODE *node1 = malloc(sizeof(struct NODE));   // 첫 번째 노드 생성
    head->next = node1;                                 // 머리 노드 다음은 첫 번째 노드
    node1->data = 10;                                   // 첫 번째 노드에 10 저장

    struct NODE *node2 = malloc(sizeof(struct NODE));   // 두 번째 노드 생성
    node1->next = node2;                                // 첫 번째 노드 다음은 두 번째 노드
    node2->data = 20;                                   // 두 번째 노드에 20 저장

    node2->next = NULL;                                 // 두 번째 노드 다음은 노드가 없음(NULL)

    struct NODE *curr = head->next;    // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
    while (curr != NULL)               // 포인터가 NULL이 아닐 때 계속 반복
    {
        printf("%d\n", curr->data);    // 현재 노드의 데이터 출력
        curr = curr->next;             // 포인터에 다음 노드의 주소 저장
    }

    free(node2);    // 노드 메모리 해제
    free(node1);    // 노드 메모리 해제
    free(head);     // 머리 노드
}
void Display(PER p1){
	// 멤버 변수 전부가 그대로 복사 된다 call by value
	printf("age: %d   pay: %f    name: %s\n",p1.age,p1.pay,p1.name );
}