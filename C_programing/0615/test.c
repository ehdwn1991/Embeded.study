#include <stdio.h>
#define pi 3.14
//매크로 상수는 const와 같은 역할을 한다.
int main(){
// ===========================================================
	const int temp=5;
	// 변수의 상수화 값을 바꿀수 없음
	// temp=8;

	int val=7;
	int tmp=5;
	// const char *aa[100]="abcdefg";
	// *(aa)='w';


	//포인터 변수의 상수화1 => 포인터가 가리키는 값을 보호하고 싶을때
	// const int *p=&tmp; // int 앞에 const가 있으니 *p의 값을 바꾸는것이 불가
	// 즉, 포인터가 가르키는 주소의 값을 변경 불가
	// pt안에는 tmp의 주소가 들어있음
	// *p=3;// 안됨,
	// 포인터 변수를 상수로 만들어버리면 주소를 바꾸는것은 가능 하지만 포인터가 가르키는
	// 데이터의 값을 바꾸려고 하는것은 불가
	// p=&val;//됨



	// 포인터 변수의 상수화2 => 처음 선언시에 저장한 주소를 변경하는것을 막음
	// int *const pt =&tmp; //pt 앞에 const가 있으니 pt의 값을 바꾸는것이 불가함
	// // pt안에는 tmp의 주소가 들어있음
	// 	*pt=3;//됨, 근데 tmp가 저장하고 있는 값을 바꾸는것은 가능
	// 	pt=&val;//안됨


// ===========================================================
	// const char *b="abc";
	// char const *c="abc";
	// char a='w';
	// b=&a;
	// c=&a;
	// // *b='e';
	// // *c='q';
	// printf("b[0]:%c b(string): %s c[0]: %c c(string):%s \n",*b,b,*c,c  );



// ===========================================================
	char *a1="abc";
	char *w="qqqq";
	// a1은 문자열 상수를 가르키는 포인터 변수 즉 문자열 상수가 되버리면
	// 수정이 불가능 하다.
	//
	//밑의 두개의 코드는 돌아가질 않는다. 왜냐면 a1은 문자열 상수이기 떄문에
	// 값을 바꿀수 없다.
	// *(a1+1)='k';
	// a1[1]='k';
	
	//a1이 가르키는 주소를 바꾸는것은 가능.
	// a1=w;
	// printf("%s\n",a1 );

	
	// a1++;
	// printf("%c\n",*a1 );



// ===========================================================
	char b1[10]="abc";
	// b1[1]='k';
	// *(b1+1)='w';
	// printf("%s\n",b1 );


// ===========================================================
	// 배열명 증감 연산
	// case1 불가능
	// b1++; // 배열명으로 ++연산 불가 왜냐면 b1++ 은 b1=b1+1 이랑 같은 말이다 당연 안된다.
	// printf("%c\n",*b1 );
	// case2 가능
	//*(b1+1)==b1[1]
	// printf("%c\n",*(b1+1) );




// ===========================================================
	// 포인터 변수를 묶어서 포인터 배열로 만든다.

	char *str1="embedded";
	char *str2="study";
	char *str3="good";
	// char *pst[3]; //char가 자료형 *pst가 배열명 [3]가 크기
	//pst는 주소 저장용.


	// char *pst[3]={str1,str2,str3};
	// printf("%s\n",pst[1] );
	// printf("%s\n",*(pst+1) );



	char *pst[3]={"embedded","study","good"};
	printf("%s\n",pst[1] );
	printf("%s\n",*(pst+1) );

	printf("pst의 size%lu\n",sizeof(pst) );
	for (int i = 0; i < 3; ++i)
	{
		printf("%s\n",pst[i] );
		// printf("%s\n",*(pst+i) );

	}

	// printf("%c\n",*(*(pst+1)+2) );
	// printf("%c\n",*(pst[1]+2) ); //pst[1]은 포인터형 배열이다.
	// *(*(pst+2))='a'; //str3는 문자열 상수로 메모리에 올라가 있기 떄문에 수정 불가
	// printf("%s\n",str3 );

		// pst== 배열의 시작 주소명베열명명)
	// pst[0]== 0x002
	// *(pst[0])=='e' => str1의 e요소

	
}