#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 11-3 getchar, putchar\n");
	printf("\n");

	int ch;

	ch = getchar();
	printf("�Է��� ���� : ");
	putchar(ch);
	putchar('\n');

	return 0;
}