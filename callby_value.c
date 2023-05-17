// 변수의 값을 인수로 주는 경우

#include <stdio.h>

void swap(int x, int y);        // 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
    int a = 10, b = 20;         // 변수 선언과 초기화

    swap(a, b);                 // a, b의 값을 복사해서 전달
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}