// 매개변수가 없는 함수

#include <stdio.h>

int get_num(void);                          // 함수 선언

int main(void)
{
    int result;

    result = get_num();                     // 함수 호출, 반환값은 result에 저장
    printf("반환값 : %d\n", result);
    return 0;          
}

int get_num(void)                           // 매개변수가 없고 반환형만 있다.
{
    int num;                                // 키보드 입력값을 저장할 변수

    printf("양수 입력 : ");
    scanf("%d", &num);
    while (num < 0)
    {
        printf("양수를 입력하세요!\n");
        printf("양수 입력 : ");
        scanf("%d", &num);
    }
    return num;                             // 입력한 값 반환
}