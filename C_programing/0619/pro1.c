#include <stdio.h>
#include <stdlib.h>
int *input(void);
void Display(int **pD);

int main(void){
	
	int *ptr=NULL;
	ptr=input();
	Display(&ptr);

	free(ptr);
	return 0;
}


void Display(int **pD){
	for (int i = 0; i < 3; ++i)
	{
		printf("%d\n",*(*(pD)+i) );
		// printf("%d\n",*(pD[0]+i) );
		// printf("%d\n",pD[0][i] );
	}

}

int *input(){
	int *score=(int*)malloc(sizeof(int)*3);
	for (int i = 0; i < 3; ++i)
	{
		scanf("%d",&score[i]);
	}
	return score;
}