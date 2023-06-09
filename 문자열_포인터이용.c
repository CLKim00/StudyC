// 포인터로 문자열을 사용하는 방법

#include <stdio.h>

int main(void)
{
    char *dessert = "apple";            // 포인터에 문자열 초기화

    printf("오늘 후식은 %s입니다.\n", dessert); 
    dessert = "banana";
    printf("내일 후식은 %s입니다.\n", dessert);

    char *pa = "apple";                 // 같은 문자열 상수는 여러 번 사용해도 하나만 저장하고
    char *pb = "apple";                 // 그 주소를 공유하도록 번역
    printf("%p, %p", pa, pb);

    return 0;
}