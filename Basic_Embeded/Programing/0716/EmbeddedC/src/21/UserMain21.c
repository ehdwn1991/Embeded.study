#include <stdio.h>

//
// 함수의 인자로 전달된 문자열의 크기를 알 수 있는 방법은 있다
//

// 문자열에서 해당 문자(key)를 찾아서 replacedKey로 대체
int Replace(char *str, char key, char replacedKey)
{
    int i, cnt = 0; // 대체한 만큼을 count할 변수

    for(i=0; str[i] != '\0'; i++) // 널문자까지 반복
    {
        if(str[i] == key)
        {
            str[i] = replacedKey;

            cnt++; // count
        }
    }

    return cnt; // 대체된 적이 없으면 0이 그대로 리턴됨
}


void User_Main()
{
    int replacedCnt = 0;

    char buf[32] = "A rolling Stone gatherS no moSS";
    
    // 대문자 S를 소문자 s로 대체
    replacedCnt = Replace(buf, 'S', 's');
    
    if(replacedCnt == 0)
    {
        printf("No replaced key \n");
        return;
    }

    printf("[%s] \n"
                "%d keys are replaced. \n",
                buf, replacedCnt); 
}
