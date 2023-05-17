// 직접 구현해보는 gets 함수

#include <stdio.h>

int main(void)
{
    int i = 0;              // 배열 요소 첨자 변수
    char str[20];           // 문자열을 저장할 배열
    char ch;                // 입력한 문자를 받아둘 임시 변수

    do
    {
        ch = getchar();     // 일단 문자 하나 입력
        str[i] = ch;        // 배열에 저장
        i++;                // 첨자 증가
    } while (ch != '\0');   // 입력한 문자가 개행이면 종료

    str[--i] = '\0';        // 개행 문자가 입력된 위치에 널 문자 저장
    printf("%s", str);
    return 0;
    
}