#include "Timer.h"

// imitation implementation
void Timer_Delay(int msec)
{
	int i, rep = msec * 0x1ff;
	
	for(i=0; i<rep; i++);
}
