#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_ten(int *pa);

int main()
{
	printf("���� 13-7 �����͸� �Ἥ ������ ���� 10�� ���ϴ� ���\n");
	printf("\n");

	int a = 10;

	add_ten(&a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int *pa)
{
	*pa = *pa + 10;
}
