#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* sum(int a, int b);

int main()
{
	printf("���� 13-8 �ּҸ� ��ȯ�Ͽ� �� ������ �� ���\n");
	printf("\n");

	int* resp;

	resp = sum(10, 20);
	printf("�� ������ �� : %d\n", *resp);

	return 0;
}

int* sum(int a, int b)
{
	static int res;

	res = a + b;

	return &res;
}
