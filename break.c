// break를 사용한 반복문 종료

#include <stdio.h>

int main(void)
{
    int i;              // 반복 횟수 제어 변수        
    int sum = 0;        // 1부터 10까지의 합을 누적할 변수

    for (i = 1; i <= 10; i++)
    {
        sum += i;
        if (sum > 30) break;
    }
    printf("누적한 값 : %d\n", sum);
    printf("마지막으로 더한 값 : %d\n", i);

    return 0;
}