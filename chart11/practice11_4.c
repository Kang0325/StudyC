#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 11-4 ���۸� ����ϴ� ���� �Է�\n");
	printf("\n");

	char ch;
	int i;

	printf("���� �Է� : ");
	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}