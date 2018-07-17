#include <stdio.h>

//
// 구조체 복사
//

typedef struct person_t
{
	char name[12];
	int age;
} Person;

void User_Main()
{
	Person me = { "JSH", 20 };
	Person you;
	
	
	you = me;
	
	printf("[%s]'s age : %d \n", 
		you.name, you.age);
}
