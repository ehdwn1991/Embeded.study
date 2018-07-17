#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	printf("hello\n");


	for (int i = 0; i < argc; ++i)
	{
		/* code */
	printf("%s\n",argv[i]);
	}

	return 0;
}