#include <stdio.h>

void func(int (*fp)(int,int));
int sum();
int mul();
int max();

int main(){
	int sel;
	printf("1. 두정수의 합\n");
	printf("2. 두정수의 곱\n");
	printf("3. 두정수 중에 최대값\n");
	printf("원하는 작업 선택: ");
	scanf("%d",&sel);

	switch(sel){
		case 1: func(sum); break;
		case 2: func(mul); break;
		case 3: func(max); break;
	}

	return 0;
}

void func(int (*fp)(int,int)){
	int a,b;
	int res;
	printf("두 정수 입력: ");
	scanf("%d %d",&a,&b);
	res=fp(a,b);
	printf("결과: %d\n",res );


}

int sum(int a, int b){
	return a+b;
}

int mul(int a, int b){
	return a*b;
}
int max(int a,int b){
	return a>b?a:b;
}