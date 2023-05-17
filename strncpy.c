// strncpy 함수를 사용한 문자열 복사

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "mango tree";

    strncpy(str, "apple-pie", 5);       // "apple-pie"에서 다섯 문자만 복사

    // str[5] = '\0';                      "apple" 로만 쓰이도록 하려면 널 문자 별도 저장 필요

    printf("%s\n", str);

    return 0;
}