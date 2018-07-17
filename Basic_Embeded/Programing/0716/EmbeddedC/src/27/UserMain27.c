#include <stdio.h>

//
// 배열의 이름 arr 의 주소와 &arr 의 주소는 같지만 구별하라
//

void To_Lower(char *str)
{
    char c;

    while( (c = *str) != '\0' )
    {
        if(65 <= c && c <= 90)
        {
            *str  |=  1<<5;
        }

        str++;
    }
}


void User_Main()
{
    int i;
    
    char arr[3][32] = {
        "TIME FLIES LIKE AN ARROW",
        "DON'T JUDGE A BOOK BY ITS COVER",
        "OUT OF MIND, OUT OF SIGHT"
    };

	
    for(i=0; i<3; i++)
    {
        To_Lower( arr[i] ); // *(arr + i)
		
		arr[i][0]  &=  ~(0x1<<5);
		
        printf("%s \n", *(arr + i) ); // arr[i]
    }
}
