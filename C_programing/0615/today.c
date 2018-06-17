#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void display();
int main(){


	char *str1="embedded";
	char *str2="study";
	char *str3="good";
	char *pst[3]={str1,str2,str3};
	display(pst);
	test();
}

void display(char **a){

	for (int i = 0; i < 3; ++i)
	{
		printf("%s\n",*(a+i) );


	}
}