#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main()
{
	printf("예제 17-5 구조체를 반환하여 두 변수의 값 교환\n");
	printf("\n");

	struct vision robot;

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

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