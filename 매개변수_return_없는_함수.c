// 반환값과 매개변수가 모두 없는 함수

#include <stdio.h>

void print_line(void);          // 함수 선언

int main(void)
{
    print_line();               // 함수 호출
    printf("학번    이름    전공    학점\n");
    print_line();

    return 0;
}

void print_line(void)
{
    int i;

    for (i = 0; i < 50; i++)    // 50번 반복하여 '-' 출력
    {
        printf("-");
    }
    printf("\n");
}