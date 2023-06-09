// strcpy 함수의 사용법

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char *ps1 = "banana";               // 포인터로 문자열 상수 연결
    char *ps2 = str2;                   // 포인터로 배열 연결

    printf("최초 문자열 : %s\n", str1);
    strcpy(str1, str2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps1);                  // 문자열 상수를 연결한 포인터 사용
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps2);                  // 배열을 연결한 포인터 사용
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, "banana");
    printf("바뀐 문자열 : %s\n", str1);

    return 0;
}