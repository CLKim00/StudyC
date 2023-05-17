// switch ~ case문의 사용

#include <stdio.h>

int main(void)
{
    int rank = 2, m = 0;

    switch (rank)       // rank의 값이 얼마인지 확인
    {
        case 1:         // rank가 1이면
            m = 300;    // m = 300을 수행하고
            break;      // 블록을 벗어나 22행으로 이동
        case 2:
            m = 200;
            break;
        case 3:
            m = 100;
            break;
        default:        // rank와 일치하는 case의 값이 없으면
            m = 10;     // m = 10을 수행하고
            break;      // 블록을 벗어나 22행으로 이동
    }

    printf("m : %d\n", m);

    return 0;
}