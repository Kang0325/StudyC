#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 12-7 ���ڿ� ����ϴ� puts�� fputs�Լ�\n");
	printf("\n");

	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);			// puts�Լ� �ڵ� ���� o
	fputs(ps, stdout);	// fputs�Լ� �ڵ� ���� x
	puts("milk");

	return 0;
}
