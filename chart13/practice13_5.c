#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 13-5 �������� ������ �ݺ����� ����� ��\n");
	printf("\n");

	register int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
