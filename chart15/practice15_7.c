#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);

int main()
{
	printf("���� 15-7 �Լ� �����͸� ����� �Լ� ȣ��\n");
	printf("\n");

	int (*fp)(int, int);
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{
	return (a + b);
}