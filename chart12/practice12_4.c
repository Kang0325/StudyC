#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 12-4 gets�Լ��� �� ���� ���ڿ� �Է�\n");
	printf("\n");

	char str[80];

	printf("���� ���Ե� ���ڿ� �Է� : ");
	gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}