#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pro_1();
void pro_2();
void pro_3();
void cleanbuf();
void ex_for();
void applied_star();
void applied_mutiplication();
void applied_serial_alphabet();
int main()
{

	int n;
	while(1){
		// printf("\n====n: %d====\n",n);
		printf("1: find the max integer\n2: convert uppercase to lowercase with visversa\n");
		printf("3: find the mutiple of 3\n4: 이중 for문에서 같은 변수를 사용할때 문제점\n");
		printf("5:종류별 별찍기\n6: 구구단\n7: 연속된 알파벳\n0:exit\nSelect: ");
		n=getchar();
		if(n=='1')pro_1();
		else if(n=='2')pro_2();
		else if(n=='3')pro_3();
		else if(n=='4')ex_for();
		else if(n=='5')applied_star();
		else if(n=='6')applied_mutiplication();
		else if(n=='7')applied_serial_alphabet();
		else
			break;

	}

}

void cleanbuf(){
	while(getchar()!=10);
}
void applied_star(){
	//별찍기
	int input;
	int space=0;
	int state_num=0;

	scanf("%d",&input);
	printf("\nregular triangle\n");
	space=input;
	for(int i=0;i<input;i++){
		for(int k=0;k<space-1;k++) printf(" ");
			for(int j=0;j<2*i+1;j++){
				printf("*");

			}
			space--;
			printf("\n");

		}
		space=0;
		
		printf("\nright align of regular triangle\n");
		space=input-1;
		for (int i = 0; i < input; ++i)
		{
			for (int k = 0; k < space; ++k)
			{
				printf(" ");
			}
			for (int j = 0; j < input-space; ++j)
			{
				printf("*");
			}
			printf("\n");
			space--;
		}


		printf("\nright align of regular triangle\n");
		space=input-1;
		for (int i = 0; i < input; ++i)
		{
			for (int j = 0; j < input-space; ++j)
			{
				printf("*");
			}
			printf("\n");
			space--;
		}

		printf("\nInverted triangle\n");
		for (int i = 0; i < input; ++i)
		{
			for (int j = 0; j < i; ++j)
			{
				printf(" ");
			}
			for (int k = (2*i)+1; k <=(input*2-1) ; ++k)
			{
				printf("*");
			}
			puts("");

		}

		space=0;

		//inverted triangle left

		printf("\nLeft align of inverted triangle\n");
		for (int i = 0; i < input; ++i)
		{
			for (int k = 0; k < input-space; ++k)
			{
				printf("*");
			}

			
			space++;
			printf("\n");


		}
		space=0;
		printf("\nRight align of inverted triangle\n\n");
		//inverted triangle right
		for (int i = 0; i < input; ++i)
		{
			for (int j =0 ; j < space; ++j)
			{
				printf(" ");
			}
			for (int k = 0; k < input-space; ++k)
			{
				printf("*");
			}
			space++;
			printf("\n");


		}
	cleanbuf();		
		return;
	}

	void applied_mutiplication(){
// 구구단
		int tens,unit;
		int count=0;
		count=2;
		for (int i = 2; i < 10; ++i)
		{

			for (int j = 1; j < 10; ++j)
			{
				for (int k = 0; k < 4; ++k)
				{
					printf("%d*%d=%d\t",i+k,j,(i+k)*j );

				}
				puts("");
			}
			i+=3;

		}
		return;

	}

	void applied_serial_alphabet(){
		char input;
		char point_en;
		printf("insert one word: ");
		scanf("%c",&input);
		point_en=input;
		while((input)<='z'){

			for (int i = 0; point_en+i <= input; ++i)
			{
				printf("%c",point_en+i );

			}
			input++;
			printf("\n");
		}
		cleanbuf();
		return;

	}

	void book_prob(){
// p.164 pro.1
		int testcase=0;
		int a,c;
		char b;


	// p.178 prob.2
		int i=0;
		int total=0;
		int plus_num;
		int plus_total;

		int num_b=0;


		scanf("%d",&testcase);
		for (int i = 0; i < testcase; ++i)
		{
			scanf("%d%c%d",&a,&b,&c);
			switch(b){
				case '+':
				printf("%d+%d=%d\n",a,c,a+c );
				break;
				case '-':
				printf("%d-%d=%d\n",a,c,a-c );
				break;
				case '*':
				printf("%d*%d=%d\n",a,c,a*c );
				break;
				case '/':
				printf("%d/%d=%d\n",a,c,a/c );
				break;

			}
		}
		cleanbuf();


	// p.161 pro-4
		scanf("%d",&a);
		switch(a){
			case 3:
			num_b=1;
			break;
			case 5:
			num_b=2;
			break;
			case 7:
			num_b=3;
			break;
			default:
			num_b=0;
			break;



		}

		printf("%d\n",b );
		cleanbuf();



// 2번
		i=0;
		while(i++<10){
			printf("$");
		}
		puts("");
// 4번
		i=0;
		for (int i = 1; i <= 100; ++i)
		{
			if(100-i>49)
				total+=i+(101-i);
		}
		printf("%d\n",total );

//5번
		while(1){
			scanf("%d",&plus_num);
			if(plus_num>0)
				plus_total+=plus_num;
			else
				break;
		}
		printf("%d\n",plus_total );



	}
	void lectureofcontents(){
	// char name[100]={'\0',};
	// int age=0,student_num=0;
	// scanf("%s %d %d",name,&age,&student_num);
	// printf("%s %d %d \n",name,age,student_num );
	// printf("%p %p %p \n",&name,&age,&student_num );
	// printf("%d\n",(5+3/2<<7) );

    // Casting
	// int a=5,b=2;
	// double res=0;
	// res=(double)a/b	;
	// printf("%lf\n",res );
	// p.145 pro-5
	// int total=0;
	// double avg=0;
	// int ko,en,math;
	// scanf("%d %d %d",&ko,&en,&math);
	// total= ko+en+math;
	// avg=(double)total/3;
	// if(avg>=90)
	// 	printf("avg: %.1lf A\n",avg);
	// else if(90>avg&& avg>=80)
	// 	printf("avg: %.1lf B\n",avg);
	// else
	// 	printf("avg: %.1lf C\n",avg);

	// 선생님 switch 문에서 break가 빠졌을때 예시
   // int rank = 2, m = 0;

   //  switch(rank)
   //  {
   //     case 1 : 
   //         m += 300;
   //         break;
   //     case 2 :
   //         m += 200;
   //     case 3 :
   //         m += 200;
   //         break;
   //     defalult :
   //         m = 10;
   //         break;
   //  }

   //  printf(" m  : %d\n", m);


	}





	void pro_1(){
	// 1. 문제  큰수를 찾으세요.
		printf("find the max integer\n");
		int val1=0;
		int val2=0;
		int val3=0;
		int max;
		printf("input three integer(seperate the number with space):\n");
		scanf("%d %d %d",&val1,&val2,&val3);


/*  if~else 문을 활용해서 가장 큰 값을 찾는 코드를 작성  */
		max=val1;
	// case1=> val1 max
	// case2=> val2 max
	// case3=> val3 max

		if(max>=val2 && val2>=val3)
			max=max;
	else if(max<=val2 && val2>=val3){ //case2
		max=val2;
	}
	else{
		max=val3;
	}

	printf("max : %d\n", max);

	cleanbuf();

	return;
}

void pro_2(){
	printf("convert uppercase to lowercase with visversa\n");
	// 2.  입력한 문자가 영문(대문자) 이면  영문(소문자)로 변환 해서 출력하고
//     입력한 문자가 영문(소문자) 이면  영문(대문자)로 변환 해서 출력

	// char input;
	// scanf("%c",&input);
	char *buf=(char*)malloc(sizeof(char));
	printf("typing any words: ");
	fgets(buf,1024,stdin);
	while(*buf!='\0'){
		if(*buf>10){
			if(*buf>='A'&&*buf<='Z')
				printf("%c\n",*buf+32 );
			else
				printf("%c\n",*buf-32 );
		}
		buf++;	
	}
	*(buf-1)='\0';
	puts(buf);

// cleanbuf();
	return;
}

void pro_3(){
	printf("find the mutiple of 3\n");
	// 3.  두 정수를 입력 받아 합이 짝수이고 3의 배수인 수를 출력 합니다.
//     아니면 아닙니다.
//     맞으면 두수의 합을 출력
	int input_a=0,input_b=0;
	int sum=0;
	printf("insert two integer: ");
	scanf("%d %d",&input_a,&input_b);
	sum=input_a+input_b;

	if(sum%2==0&&sum%3==0)
		printf("Yes, %d\n",sum);
	else
		printf("No\n");

	cleanbuf();
	return;
}

void ex_for(){

	
	// 밑의 두개의 코드의 다른 점이 있다
	// 첫번쨰 케이스는 처음 변수를 선언해주고 데이터영역 에 변수가 선언 되어 있으며

	int i; //테이터 영역에 변수가 저장되어 있다. 예를 들어 주소는 0x7ffee5a7f96c 이다.
	printf("이중 for문에서 같은 변수를 사용할때 문제점\n");
	printf("첫 케이스는 각 변수에서 초기화를 하지 않을때\n");
	printf("\n\n===============Case 1=================\n");
	for ( i = 0; i < 5; i++) // 물론 이부분에서도 변수 i의 주소는 데이터 영역에 있는 0 0x7ffee5a7f96c이다
	{
		printf("first 1: %d %p\n",i,&i );
      	for (i = 1; i <= 6; i++) // 물론 여기도 주소는 0 0x7ffee5a7f96c이다 
      	{
      		printf("second 1: %d %p\n",i,&i );
      		// 즉 for문이 돌아가는 동안 같은 주소의 변수에 값이 변한다 그리고 두번째 for문에서 i가 6이 되고
      		// 처음 for문에서 i가 6이 되기 때문에 반복문은 종료된다.
      	}


      }

      printf("\n\n===============Case 2=================\n");
      printf("두번째 케이스는 각 변수에서 초기화를 하지 않을때\n");
      for (int i = 0; i < 5; i++) 
      {
      	//첫 for문의 i의 주소와 두번째 for문의 i의 주소가 다르다!
      	printf("first i: %d address:%p\n",i,&i );
      	for (int i = 1; i <= 6; i++) 
      	{
      		printf("second i: %d address:%p\n",i,&i );
      	}


      }
      return;
  }





