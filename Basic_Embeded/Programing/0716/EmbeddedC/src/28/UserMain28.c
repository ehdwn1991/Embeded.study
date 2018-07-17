#include <stdlib.h>
#include <string.h>

//
// 다른 함수에서 포인터의 값(주소)을 변경하는 예
//

#if 1
char* Alloc_String(const char *str)
{
    char *pTemp = 0; // NULL
    unsigned int len = strlen(str);

	
    pTemp = malloc(len + 1);
	
    strncpy(pTemp, str, len);
	
	pTemp[len] = 0; // '\0'

    return pTemp;
}

void User_Main() 
{
    char *str = NULL; // 0

    str = Alloc_String("The string in Heap segment.");
	
    printf("%s \n", str); 
	
	if(str)
		free(str);
}
#endif







#if 0
void Alloc_String(char **allocDest, const char *str)
{
    unsigned int len = strlen(str);

    *allocDest = malloc(len + 1);

    strncpy(*allocDest, str, len);
	
	(*allocDest)[len] = '\0';  // 0 
}

void User_Main() 
{
    char *str = NULL; // 0

    Alloc_String(&str, "The string in Heap segment.");

    printf("%s \n", str);
	
	if(str)
		free(str);
}
#endif
