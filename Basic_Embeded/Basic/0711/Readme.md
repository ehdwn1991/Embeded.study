## Memory storage spec and variable scope, life-time

### static 예제
```c
int i; 선언
int j=1; 정의(선언+할당)
static int k;
static int q=1;
extern int w; 선언 x 할당 x -> 다른 쪽 파일에 정의되어 있는  w를 가져옴 이런걸 linkage라고함
extren int e=1; 문법 오류 -> 선언도 못하는데 정의할수 없음(할당 못함)
//extern은 filescope를 벗어나서 가져 온다
int main(){

}

```

### const 예제

```c
const int i=1;
    int *pw;
    pw=&i;
    *pw=4;
    printf("%d\n",*pw );
// 가능은 하나 별로 의미 없음
```


```c
const int *p=0x0; = > *p를 못바꿈
int const *p=0x0; = > *p를 못바꿈
int *const p=0x0; = > p 를 못바꿈
```