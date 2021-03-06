# C언어


## 1일차
프로그램이란? 컴퓨터에서 실행될때 특정 작업을 수행 하는 일련의 명령어들의 모음이다.
* 소프트웨어 공학
    - 요구사항 분석
        자료형 정의 등등
    - Flow chart 설계 및 구현(pseudo code)
    - 코드 구현
    - 실행
    - 테스트
    - 유지보수

* CPU 구조
  Control unit<->ALU<->Processor resister(R1,R2,R3...)
  위의 3가지 장치들이 Internal bus로 연결되어 통신한다.

  * ALU(Arithmetic logic unit )

    산술 논리 장치 : 실질적으로 산술, 논리 계산을 수행함.

  * Resister

      CPU의 자체적인 메모리저장 기능.

      Memory buffer register(MBR)

      ​	I/O로 보내지거나 메모리에 저장될 Word 혹은 I/O나 메모리로 부터 Word를 받는 것. 

      Memory address register(MAR)

      

      Instruction register(IR)

      Instruction buffer register(IBR)

      Program counter(PC)

      Accumulator (AC) and mutiplier quotient (MQ)

  * Control unit

      CPU의 명령어를 제어한다.

* 폰노이만 구조(최초의 컴퓨터 구조를 만듬)

    폰노이만의 구조는 CPU, 메모리, 프로그램 구조를 갖는 프로그램 내장 방식 컴퓨터를 뜻한다.

<center>
![cpu구조](https://upload.wikimedia.org/wikipedia/ko/a/a1/Von_Neumann_architecture_kor.png)
폰노이만 구조(출처: 위키 백과사전)
</center>



* C 메모리 구조

  <center>![c메모리 구조](https://1.bp.blogspot.com/-DoCFzIcQGDs/VlnGRLw69mI/AAAAAAAAAz0/xxrtrqK39FU/s1600/process%2Blooks%2Bin%2Bmemory.jpg)(출처 : https://bitsofcomputer.blogspot.com/)</center>

  c언어에서의 메모리 구조를 알고 있다는것은 상당히 중요하다.

  주로 동적 할당 할때나 임베디드 시스템을 다룰때 메모리 구조와 영역을 알고 있으면 편하다.

  [geeks를 참고 하면서 공부해보자](https://www.geeksforgeeks.org/memory-layout-of-c-program/)

  

* 컴파일 과정

  * gcc compiler

    source.c -------> source.i -------> source.s -------> source.o -------> source

    ​         (precompile)       (compiler)         (assembler)           (linker)

    <center>![gcccompile](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/images/GCC_CompilationProcess.png)gcc compile 과정 (출처: 제타위키)</center>

```shell
$ gcc test.c
$ ls
 a.out 실행 파일 생성
$ gcc -c test.c
 test.o 오브젝트 파일 생성
$ gcc -o test.out test.o 
 test.out 실행 파일이 생성됨
$ gcc -v --save-temps -o test.out test.c 컴파일 전체 과정을 보여주고 파일을 저장해줌
	test.c test.i test.s test.o test.out
```

* 상수, 변수

  * 변수(Variable) : 정수, 실수, 문자, 문자열 등의 형태를 갖춘 가변 데이터.

  * 상수(Constant) : 값이 바뀌지 않는 데이터를 상수라 한다.

    1. 변수 상수화

       변수 앞에 const를 붙여주면 상수가 된다.

       const int a; => 상수로 정해진 변수는 값을 바꾸는것이 불가

    2. 매크로를 통한 상수화

       `# define` 을 통해서 상수를 만들수 있다. 매크로는 전처리기에 의해 변환 되고

       전역변수 처럼 사용 가능 하다. 위치는 헤더 파일 제일 밑에 사용해주면된다.

       ```c
       #include <stdio.h>
       #define pi 3.14
       #define poweroftwo 2
       ```

       

    ex) 정수 상수 => -2,-1,0,1,2,3....

    ​      실수 상수 => -1.2, -0.2231, 3.14...

    ​      문자 상수 => '1', '2' ,'ㄱ','A','a'...

    ​      문자열 상수 => "abc", "ABC"...

    3. 정수형 상수의 컴파일후의 비트 형태

       정수형 상수는 컴파일되면 4바이트 크기의 2진수 형태로 변환 된다.

       예를 들어 정수 13이 컴파일 되면,

       ```c
       0000 0000  0000 0000  0000 0000  0000 1101
       <--MSB                              LSB-->
       ```

       

* ms