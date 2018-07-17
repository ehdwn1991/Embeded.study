#include <stdio.h>
#include "Swapper.h"
#include <stdlib.h>

void Mem_Copy(void *vpDest, void *vpSrc, unsigned int nByte)
{
    unsigned int i;
		
    for(i=0; i<nByte; i++)
        *((char *)vpDest + i) = *((char *)vpSrc + i);
}

void Swap_Ex(void *vp1, void *vp2, unsigned int nByte)
{
    void *temp = malloc(nByte);
	
    Mem_Copy(temp, vp2, nByte);
    Mem_Copy(vp2, vp1, nByte);
    Mem_Copy(vp1, temp, nByte);
}
