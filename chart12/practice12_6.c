#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 12-6 ���� ���ڷ� ���� gets�Լ��� �Է��� ���ϴ� ���\n");
	printf("\n");

	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);
	fgetc(stdin);
	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}