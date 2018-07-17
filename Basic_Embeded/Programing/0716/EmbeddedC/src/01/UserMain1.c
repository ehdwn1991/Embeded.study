#include <stdio.h>

//
// 자료형 변환에 따른 출력 결과를 예상해 보자
//

void Ex1()
{
    unsigned char uc = -8;
    signed char sc = -8;

    printf("Ex1] uc : %d \n", uc);
    printf("Ex1] sc : %d \n", sc);
}

void Ex2()
{
    unsigned int ui = 0xfffffffc;
    int si;

    si = ui;
    printf("Ex2] si : %d \n", si);
}

void Ex3()
{
    short ss = 0x8c;
    signed char sc = 0x8c;

    printf("Ex3] ss : %d \n", (int)ss );
    printf("Ex3] sc : %d \n", (int)sc );
}

void User_Main(void)
{
	Ex1();  printf("\n\n");
	Ex2();	printf("\n\n");
	Ex3();	printf("\n\n");
}