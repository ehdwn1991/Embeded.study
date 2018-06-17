// 최대값 최소값의 차 
#include <stdio.h>

int MaxMin_Arr();
void Input_Arr();
void buble();
int main(void)
{
	int ArrValue[5];
	int result = 0;
  	int len=sizeof(ArrValue)/sizeof(int);
	Input_Arr(ArrValue);
	result = MaxMin_Arr(ArrValue,len);

	printf("최대값 과 최소값의 차이 : %d\n\n", result);

	return 0;
}



void buble(int *a,int size){
	int temp=0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = size-1; j >i; --j)
		{
			if(a[j-1]>a[j]){
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}


}
int MaxMin_Arr(int* pA,int size)
{
	buble(pA,size);
	return pA[size-1]-pA[0];
}

void Input_Arr(int* pV)
{
	int N;
	scanf("%d",&N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d",&pV[i]);
	}


}

