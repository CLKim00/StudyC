#include <stdio.h>

struct vision
{
    double left;
    double right;
};

struct vision exchange(struct vision robot);        // 두 시력을 바꾸는 함수

int main(void)
{
    struct vision robot;                            // 구조체 변수 선언

    printf("시력 입력 : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);                        // 교환 함수 호출
    printf("바뀐 시력 : %.1lf   %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot)
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}