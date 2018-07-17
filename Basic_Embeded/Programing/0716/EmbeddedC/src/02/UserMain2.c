#include <stdio.h>

//
// 전 처리기(C Preprocessor)의 활용을 알아보는 예제
// 컴파일만 해보는 예제임
//

#define STU_NUM 30

enum subject_t
{
	KOREAN = 0,
	ENGLISH = 1,
	MATH = 2
};

const double PI = 3.141592;


void User_Main(void)
{
	int idx = 0;
	int score[STU_NUM][3] = { {0} };
	double area_circle = 0.0;
	
	// ...
	
	area_circle = 4.0 * 4.0 * PI;
	printf("Circle's area : %lf \n", area_circle);
	
	// ...
	
	while(1)
	{	
		if(idx > STU_NUM - 1)
		{
			printf("Check the boundary\n");
			return;
		}
		
		score[idx][ENGLISH] = 100;
		
		// ...
		
		idx++;
	}
	
	// ...
	
	printf("Need not to execute this example.. \n");
	printf("The example to understand cmd of gcc, cpp \n");
}

/* 
 * [ 이 예제는 실행 파일을 실행해보는 예제가 아님 ]
 * 
 * 1. Windows의 커맨드 창 실행 (cmd)
 * 2. 이 예제가 있는 경로로 이동 (cd 명령 이용)
 * 3. 예제파일과 함께 제공된 Makefile, other_name_makefile을 이용하여 전처리
 * 4. make                       
 * 5. make -f other_name_makefile
 * 6. 전처리 결과물 (.i format)을 에디터로 열어 내용을 확인한다
 * 
 *
 * 
 * [ GCC : GNU Compiler Collection ]
 * --> xxx-xxxx-xxxx-gcc 라는 실행파일은 컴파일러 (Toolchain)
 *     전처리기→컴파일러→어셈블러→링커 를 차례로 실행시켜 최종적으로 실행 이미지를 생성하는 메인 프로그램
 *     별도 옵션을 주지 않는 한, 실행파일 생성 후 전처리,컴파일,어셈블을 수행할 때의 중간 결과물을 삭제한다
 *
 *     ※ makefile에는 ...-gcc라는 GCC 메인 프로그램을 이용하여 전처리 단계만 수행하도록(-E option) 하는 shell명령이 작성돼 있음
 *        Linux의 "make"라는 툴을 이용하여 Makefile에 작성된 shell명령들을 차례로 수행하도록 할 수 있다
 *        make는 디폴트로 "Makefile"이라는 파일명을 그대로 사용한다 (명령창에 make 라고만 치면 자동으로 Makefile의 내용을 수행)
 *
 *
 * --> xxx-xxxx-xxxx-cpp 라는 실행파일은 전처리기( CPP; Not "C++" but "C Preprocessor" )
 *     전처리만 수행하는 전처리기, 별도 옵션을 줄 필요 없이 전처리만 수행하는 전처리 프로그램
 *
 *     ※ other_name_makefile에는 ...-cpp GCC의 전처리 프로그램을 이용하여 전처리 단계만 수행 (옵션을 줄 필요 없는 순수 전처리기)
 *        Makefile 이라는 파일명 외의 다른 이름의 파일을 make에서 사용하려면 -f Option을 쓴다
 *            ▶ make -f other_name_makefile
 *
 *
 *
 *
 *
 * [ make를 사용하지 않고 컴파일을 수행해야할 때의 번거로움 ]
 * 
 * - GCC가 설치된 경로를 C:\gcc\bin 라고 가정 (gcc는 \bin 폴더에 각종 소프트웨어가 들어있음)
 * - GCC 컴파일러의 실행 파일명을 arm-none-eabi-gcc   라고 가정
 * - 컴파일하려는 소스코드는 C:\Workspace\Exam 경로에  main.c  module1.c    라고 가정
 *
 *    1. cd C:\gcc\bin 
 *    2. arm-none-eabi-gcc C:\Workspace\Exam main.c C:\Workspace\Exam module1.c 
 *    
 * - cd명령 없이 Full path를 적어 프로그램을 실행하는 등의 여러가지 방법이 있으며,
 *   어떠한 경로에서도 실행 가능하도록 Path(Windows의 환경 변수)에 gcc의 경로를 등록하는 조금이나마 편한 방법이 있으나
 *   make를 이용하는 것 보다 번거롭기는 마찬가지다
 *
 * - 본래 make는 Linux Kernel에 명령을 전달하는 shell명령을 해석하고 그대로 수행해주는 소프트웨어기 때문에 
 *   Windows에서 사용하려면 Windows에서 Linux shell의 문법을 해석해주는 WIN32전용의 make를 사용해야한다
 *
 */
