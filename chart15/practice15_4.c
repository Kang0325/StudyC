#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 15-4 �ּҷ� ���̴� �迭��� �迭�� �ּ� ��\n");
	printf("\n");

	int ary[5];

	printf("  ary�� �� : %u\t", ary);
	printf("ary�� �ּ� : %u\n", &ary);
	printf("   ary + 1 : %u\t", ary+1);
	printf("  &ary + 1 : %u\n", &ary+1);

	return 0;
}
