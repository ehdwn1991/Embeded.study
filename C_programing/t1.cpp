#include <iostream>
void func1(int *q);
void func2(int *q);
void func3(int &q);
int main(){
	int a=10;
	int *point=&a;
	printf("a address: %p  value: %d \n\n",&a,a);
	func1(&a);
	printf("After func1 a value: %d\n",a);
	printf("\n===================================\n");
	printf("point address:%p  point has : %p  value: %d \n",&point,point,*point );
	func2(point);
	printf("After func2 a value: %d\n",a);
	printf("\n===================================\n");
	printf("Now we declaration int &ref_point=a\n");
	int &ref_point=a;
	// printf("point address:%p  point has : %p  value: %d \n",&point,point,*point );
	printf("ref_point address:%p  ref_point has : %d \n",&ref_point,ref_point);
	func3(ref_point);
	printf("After func3 a value: %d\n",a);

}
void func1(int *q){
	printf("In Func1\nNow we change value of a to 100\nSo q=20;\nif you think change the value?\n");
	printf("q=20; is error occured\n");
	// q=0x100000;
	printf("q address: %p  value: %d \n",&q,*q);
	printf("a address: %p  value: %d \n",q,*q);
}
void func2(int *q){
	printf("In Func2\nNow we change value of a to 100\nSo *q=100;\nif you think change the value?\n");
	*q=100;
	printf("q address: %p  value: %d \n",&q,*q);
	printf("a address: %p  value: %d \n",q,*q);
}
void func3(int &q){
	printf("In Func3\nNow we change value of a to 100\nSo q=3000;\nif you think change the value?\n");
	q=3000;
	printf("q address: %p  value: %d \n",&q,q);
}


