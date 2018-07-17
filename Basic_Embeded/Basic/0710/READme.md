## T32_simarm 예제
> 윈도우 에서 돌려야함. 맥에서 설치 가능 하긴 하나 아직은 필요 없는듯
1. t32marm.exe 실행
2. 나온창 다 닫고 밑으 콘솔에
B:: RES
B:: D.L
B:: R
B:: D.DUMP 0X20000000
B:: D.LOAD .ELF *
3. 창하나 뜨면 ex 폴더의 image 파일 열기 (반드시 image여야함 .bin 이런거 말고)
4. F9 누르면 기계에 를 와따가따함
5. F3 누르면 다음 단계 진행
6. BL Main에 다다르면 F2해서 프로그램 실행이됨

## Memory structure
```c


```