#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void best_reverse();
int sumo();
void test();
void pro1();
int my_strlen();
int main(int argc, char *argv[]){


int a=5,b=8;
int *q=&a,*p=&b;
// int temp=0x12345678;
// char *test;
// char *f;
// char *s;
// char swap_char;
printf("a==>:%p\n",&a );
	best_reverse(&q,&p);
printf("%d %d\n",*q,*p);
printf("%d %d \n",a,b );

// int arr[5]={3,5,6,7,9};
// int res=0;
// int size=sizeof(arr)/sizeof(int);
// res=sumo(arr,size);
// printf("%d\n",res );
// test(arr);


// pro1();




}
// void test(int a[5]){
// 	printf("%d\n",a[3]);

// }
void pro1(){
	char buff[]="embedded";
	int len=0;
	len=my_strlen(buff);
	printf("%d\n",len );

}

int my_strlen(char *buf){
	int len=0;
	while(*buf!='\0'){
		len++;
		buf++;
	}
	return len;
}
int sumo(int *a,int size){
	int total=0;
	// a==arr배열의 시작주소가 들어잇
	// *a== arr 배열의 첫번쨰 주소의 값을 가리킴
	// ex) a==>0x0003
	// 	a[0]== *a     ==arr[0]=3
	// 	a[1]== *(a+1) ==arr[1]=5
	// 		...
	// 	a[4]== *(a+4) ==arr[4]=9


	for (int i = 0; i < size; ++i)
	{
		total+=a[i];
	}
	return total;

}


void best_reverse(int **a,int **b){
	int *temp=*a;
	printf("add_pt:%p add_pv:%p\n",*a,*b );
	printf("add_pt:%p add_pv:%p\n",a,b );
	printf("add_pt:%p add_pv:%p\n",&a,&b );
	// temp=*a;
	*a=*b;
	*b=temp;

}