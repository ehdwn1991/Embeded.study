#include <stdio.h>

//
// 명시적인 타입 변경
//

void User_Main()
{
    int width, height;
	double area;
	
	width = 3;
	height = 4;
	
	area = 1 / 2 * width * height;
	printf("1st] area : %lf \n", area);
	
	/* 제대로된 결과를 얻기 위한 수식 작성 */
	// 모두가 동일한 결과를 얻기 위한 수식임
	area = (double)1 / 2 * width * height;
	area = 1 / (double)2 * width * height;
	area = (double)1 / (double)2 * width * height;
	area = 1.0 / 2 * width * height;
	area = 1 / 2.0 * width * height;
	area = 1.0 / 2.0 * width * height;
	area = 0.5 * width * height;
	
	printf("2nd] area : %lf \n", area);
}
