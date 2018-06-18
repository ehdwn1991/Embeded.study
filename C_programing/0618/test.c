#include <stdio.h>
int sumarr();
int main(){

	int arr[3][4]={
		{5,6,7,8,},
		{9,10,11,12},
		{13,14,15,16}};

		int row,col;
		int res;
	// int size=sizeof(arr)/sizeof(int);
	// for (int row = 0; row <3 ; ++row)
	// {

	// 	for (int col = 0; col < 4; ++col)
	// 	{
	// 		printf("arr_m[%d][%d]: %2d  ",row,col,arr[row][col]);

	// 	}
	// 	printf("\n");
	// }
	// printf("arr:0x%p\n",arr);
	// printf("arr+1:0x%p\n",arr+1);
	// printf("arr+2:0x%p\n",arr+2);
	// printf("arr[0]:%p\n",arr[0]);
	// printf("arr[1]:%p\n",arr[1]);
	// printf("arr[2]:%p\n",arr[2]);
		res=sumarr(arr,3,4);
		printf("total sum: %d\n",res);
	}

int sumarr(int (*a)[4],int row,int col){
		int total=0;
	// printf("www%d\n",*(a[1]+1) );
	// printf("%d\n",*(*(a+1)+1) );
	// printf("%d\n",a[1][1] );
		// printf("%d\n",a[1]);
	for (int i = 0; i < row; ++i)
	{
		for (int j= 0; j < col; ++j)
		{
			total+=*(*(a+i)+j);
			// printf("%d\n",a[i][j] );


		}
	}
		printf("total:%d\n",total );
		return total;

	}	
