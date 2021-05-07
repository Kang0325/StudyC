#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student
{
	int num;
	double grade;
};

int main()
{
	printf("예제 17-1 구조체 선언하고 멤버를 사용하는 방법\n");
	printf("\n");

	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}