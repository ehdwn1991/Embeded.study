#include <stdio.h>
void best_reverse();
void reverse();
int main(){
int temp=5;
	int val=8;
	int *pt=&temp;
	int *pv=&val;

	printf("before swap => temp(%p) has : %d val(%p) has : %d\n",&temp,temp,&val,val );
	printf("before  swap => *pt(%p)->[0x%x] has : %d *pv(%p)->[0x%x] has : %d\n",&pt,pt,*pt,&pv,pv,*pv );
	// printf("%padd_pt:%p add_pv:%p\n",&temp,pt,pv );
	// printf("%padd_pt:%p add_pv:%p\n",&temp,&pt,&pv );
	best_reverse(&pt,&pv);
	// reverse(&pt,&pv);
	printf("\n================================\n\n");
	printf("after swap => temp(%p) has : %d val(%p) has : %d\n",&temp,temp,&val,val );
	printf("after  swap => *pt(%p)->[0x%x] has : %d *pv(%p)->[0x%x] has : %d\n",&pt,pt,*pt,&pv,pv,*pv );


	// printf("before swap => temp has : %d val has : %d\n",temp,val );
	// printf("after  swap => *pt has : %d *pv has : %d\n",*pt,*pv );
	// printf("add_pt:%p add_pv:%p\n",pt,pv );


}
//두개의 차이점 공부!

void reverse(int *a,int *b){
	// 이랗게 해도 돌아가긴 하는데 사실상 부적절한 부분이다.
	// 왜냐하면 현재 주소를 받아오지만 reverse 함수에서 temp 는
	// 정수형 변수이고  만약 주소 값이 정수형 범위를 초과하는 주소 값이라면 
	// 오류가 발생할수도 있다.
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

}

void best_reverse(int **a,int **b){
	int *temp=*a;
	printf("add_pt:%p add_pv:%p\n",*a,*b );
	printf("add_pt:%p add_pv:%p\n",a,b );
	printf("add_pt:%p add_pv:%p\n",&a,&b );
	*a=*b;
	*b=temp;

}