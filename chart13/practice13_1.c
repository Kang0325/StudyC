#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign();

int main()
{
	printf("���� 13-1 �� �Լ����� ���� �̸��� ���� ������ ����� ���\n");
	printf("\n");

	auto int a = 0;		// auto�� ���� ����

	assign();
	printf("main �Լ� a : %d\n", a);

	return 0;
}

void assign()
{
	int a;

	a = 10;
	printf("assign �Լ� a : %d\n", a);
}