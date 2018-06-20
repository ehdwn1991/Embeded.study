#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int rec;
	char name[30];
	char addr[50];
	int age;
	FILE *fd;
	fd = fopen("test.txt", "rt");
	if (fd == NULL)
	{
		printf("file open error\n");
		exit(1);
	}
	while (1)
	{
		rec = fscanf(fd,"%s %s %d", name, addr, &age);
		if (rec == EOF) break;
		printf("Read Data : %s %s %d\n", name, addr, age);
	}
	fclose(fd);
	return 0;
}