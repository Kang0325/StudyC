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
	printf("���� 17-1 ����ü �����ϰ� ����� ����ϴ� ���\n");
	printf("\n");

	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);

	return 0;
}