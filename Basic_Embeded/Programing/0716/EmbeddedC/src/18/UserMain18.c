#include <stdio.h>

//
// 함수 'call by value' VS 'call by reference'
//

double Get_Kinetic_byVal(double m, double v)
{
    return 0.5 * m * v * v;
}

void Get_Kinetic_byAddr(double *pResult, double m, double v)
{
    *pResult = 0.5 * m * v * v;
}

void User_Main()
{
    double m = 5.0, v = 2.0;
    double kinEnergy = 0.0;
    
    kinEnergy = Get_Kinetic_byVal(m, v);
	printf("Kinetic energy : %lf \n", kinEnergy);

	
	Get_Kinetic_byAddr(&kinEnergy, m, v);
    printf("Kinetic energy : %lf \n", kinEnergy);
}
