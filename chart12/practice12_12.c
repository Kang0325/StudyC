#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("���� 12-12 strcmp, strncmp�Լ�\n");
	printf("\n");

	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");

	if (strcmp(str1, str2) > 0) printf("%s\n", str1);
	else						printf("%s\n", str2);

	printf("\n");
	printf("�տ��� 3���� ���ڸ� ���ϸ�?\n");

	if (strncmp(str1, str2, 3) == 0) printf("����.");
	else							 printf("�ٸ���.");

	return 0;
}
