
#include <stdio.h>

extern void User_Main(void);

int main(void)
{
	//Uart_Init(115200);
	
	
	printf("\n\n------------------------------------------------------\n");
	printf("                      [ Embedded C Startup - mds2450 ] \n");
	printf("------------------------------------------------------\n\n\n\n");
	
	
	User_Main();

	
	printf("\n\n\n\n------------------------------------------------------\n");
	printf("                                    [ End of program ] \n");
	printf("------------------------------------------------------\n");
	
	return 0;
}
