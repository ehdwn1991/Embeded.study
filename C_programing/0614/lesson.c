#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pi 3.14
int total();
double avg();
void clearbuff();
int add();
int sub();
int mutiple();
double div_my();
double radian();
int power_of_N();
void find_the_prime();
void reverse();
void power_of_N_code();
void radian_code();
void calculator();
void buble_ex();
int main(int argc, char *argv[]){

	power_of_N_code();
	radian_code();
	calculator();
	buble_ex();
	find_the_prime();
	

}


void buble_ex(){
	int buff[5] = { 7, 2, 9, 3, 8 };
	int idx = 0;
	int cnt = 0;
	int temp = 0;
	int len = 0;
	len = sizeof(buff) / sizeof(int);
	printf("----정렬 전 데이터 출력----\n");
	for (idx = 0; idx < len; idx++)
	{
		printf("%3d ", buff[idx]);
	}
	printf("\n\n");

	for (int i = 0; i < len; ++i)
	{
		for (int j = len-1; j >i; --j)
		{
			if(buff[j-1]>buff[j]){
				temp=buff[j-1];
				buff[j-1]=buff[j];
				buff[j]=temp;
			}
		}
	}

	printf("----정렬 후 데이터 출력----\n");
	for (idx = 0; idx < len; idx++)
	{
		printf("%3d ", buff[idx]);
	}
	printf("\n");

}


void calculator(){
	int a=0,b=0;
	char operater;
	printf("x(operater)y 순으로 입력해주세요.\n");
	scanf("%d%c%d",&a,&operater,&b);
	switch(operater){
		case '+':
		printf("%d%c%d=%d\n",a,operater,b,add(a,b) );
		break;
		case '-':
		printf("%d%c%d=%d\n",a,operater,b,sub(a,b) );
		break;
		case '*':
		printf("%d%c%d=%d\n",a,operater,b,mutiple(a,b) );
		break;
		case '/':
		printf("%d%c%d=%.1f\n",a,operater,b,div_my(a,b) );
		break;

	}

	clearbuff();

}



void radian_code(){
	double radius=0;
	printf("원의 반지름 입력 : ");
	scanf("%lf", &radius);
	printf("반지름에 따른 원의 넓이 : %.3lf\n", radian(radius));

	clearbuff();


}



void power_of_N_code(){
	int num=0,multi=0;
	printf("입력 받은 정수(num)를 입력 받은 지수승(multi) 만큼 제곱하여 출력하는 프로그램\n\n");
	printf("계산할 정수(num) 입력 : ");
	scanf("%d", &num);
	printf("계산할 지수승(multi) 입력 : ");
	scanf("%d", &multi);

	printf("\n%d의 %d 제곱한 결과는 %d입니다.\n", num, multi, power_of_N(num,multi));
	clearbuff();

}


void reverse(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void find_the_prime(){
	int N,count=1;
	printf("에라토스테네스의 체 소수 찾기\nN까지의 소수를 찾습니다.\ninsert: ");
	scanf("%d",&N);
	char *arr=(char*)malloc(sizeof(char)*N);
	memset(arr,1,sizeof(char)*N);
	puts(arr);
	for (int i = 2;  (i*i)<= N; ++i) //루트 N까지만 체크
	{
		if(arr[i]==1){
			for (int j = i*i; j < N; j+=i)
			{
				arr[j]=0;//1 is prime 0 is not prime
			}
		}

	}

	for (int i = 2; i < N; ++i)
	{
		if(arr[i]==1){
			printf("%d ",i);
			if(count%10==0)
				puts("");
			count++;
		}
	}
	free(arr);
	puts("");
}


int power_of_N(int n, int times){
	int temp=1;
	
	for (int i = 0; i < times; ++i)
	{
		temp*=n;
	}
	return temp;
}



double radian(double radius){
	return radius*radius*3.14;
}

int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;

}

int mutiple(int a,int b){
	return a*b;
}

double div_my(int a,int b){

	return (double)a/b;
}
void print_title(){
	printf("=====<성적>=====\n");


}
double avg(int total_score,int numberofclass){

	return (double)total_score/numberofclass;
}

int total(int ko,int en, int math){
	return ko+en+math;

}

void clearbuff(){
	while(getchar()!=10);
}
