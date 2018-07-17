#include <stdio.h>

//
// 비트 필드
//

typedef struct _family_composition
{
    unsigned int father;
    unsigned int mother;
    unsigned int son;
    unsigned int daughter;
} Fam_Comp1;


typedef struct _family_composition_bf
{
    unsigned int father   : 1;  // 1bit만 사용, 0 ~ 1
    unsigned int mother   : 1;
    unsigned int son      : 3;  // 3bits만 사용, 0 ~ 7
    unsigned int daughter : 3;
} Fam_Comp2;



void Normal_Struct_Test()
{
	Fam_Comp1 myFam = {1, 1, 8, 2};
       
    printf("Size of regular structure : %u \n",
        sizeof(myFam)); // 16 Bytes

    printf("The number of son : %u \n",
        myFam.son);
}

void Bitfield_Struct_Test()
{
	Fam_Comp2 myFam = {1, 1, 8, 2};

    printf("Size of structure with bit field: %u \n",
        sizeof(myFam)); // 4 Bytes
    
    printf("The number of daughter : %u \n",
        myFam.son); // Overflow
}




void User_Main()
{
    printf("========== Normal_Copy ========== \n");
	Normal_Struct_Test();
	
	
	printf("\n\n\n========== Deep_Copy ========== \n");
	Bitfield_Struct_Test();
}
