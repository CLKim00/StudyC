// 다른 함수의 변수 사용하기

#include <stdio.h>

void swap(void);                // 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
    int a = 10, b = 20;         // 변수 선언과 초기화

    swap();                     // 인수 없이 함수 호출
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

void swap(void)
{
    int temp;                   // 교환을 위한 변수

    //temp = a;                   
    //a = b;
    //b = temp;
}