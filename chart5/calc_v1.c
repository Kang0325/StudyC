#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("------------------------------\n");
	printf("---- Calculator_version1  ----\n");
	printf("------------------------------\n");
	printf("---- Created : 2021-04-28 ----\n");
	printf("---- Author  : ������     ----\n");
	printf("------------------------------\n");
	int x, y, z;
	int plus, minus, mul, div;

	printf("�����Ͻ� ��Ģ������ �����ϼ���\n1.���� 2.���� 3.���� 4.������\n");
	scanf("%d", &z);
	printf("��Ģ���� �� �� ���� �Է��ϼ��� :\n");
	scanf("%d %d", &x, &y);

	if (z == 1)
	{
		plus = x + y;
		printf("%d + %d = %d", x, y, plus);
	}
	if (z == 2)
	{
		minus = x - y;
		printf("%d - %d = %d", x, y, minus);
	}
	if (z == 3)
	{
		mul = x * y;
		printf("%d * %d = %d", x, y, mul);
	}
	if (z == 4)
	{
		if (y != 0)
		{
			div = x / y;
			printf("%d / %d = %d", x, y, div);
		}
		else
		{
			printf("0���δ� ���� �� �����ϴ�.");
		}
	}

	return 0;
}
	