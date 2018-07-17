#include <stdio.h>
#include <math.h>

//
// 반복 작업에서 함수의 유용성
//

// 정수 n이 소수면 1, 소수가 아니면 0을 출력(return)
int IsPrimeNumber(int n)
{
    int i, rep = (int)sqrt((double)n);

    if(n < 2) 
        return 0; // 2보다 작은 수는 소수가 아님

    for(i=2; i<=rep; i++)
        if(n % i == 0) // 나누어 떨어지면
            return 0; // 소수가 아니므로 0을 리턴한다

			
    // 반복문에서 return 0을 모두 피하면, n은 소수
    return 1; 
}



void User_Main()
{
    // 11, 4, 8, 19, 31, 97이 소수인지 판별하고 소수가 맞으면 출력
    int i, data[6] = {11, 4, 8, 19, 31, 97};
    
    for(i=0; i<6; i++)
        if( IsPrimeNumber(data[i]) )
            printf("%d  ", data[i]);
}

