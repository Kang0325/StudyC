#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_ten(int a);

int main()
{
	printf("���� 13-6 10�� ���ϱ� ���� ���� �μ��� �ִ� ���\n");
	printf("\n");

	int a = 10;

	add_ten(a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)
{
	a = a + 10;
}
