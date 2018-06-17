#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

char *a=(char*)malloc(sizeof(char));
for (int i = 0; i < 300; ++i)
{
	a[i]=i;
}

for (int i = 0; i < 300; ++i)
{
	printf("%d address:%p\n",a[i],&a[i] );
}

printf("aa:%lu\n",strlen(a) );
free(a);
}