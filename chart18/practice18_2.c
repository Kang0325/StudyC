#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("���� 18-2 ������ ������ ȭ�鿡 ����ϱ�\n");
	printf("\n");

	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	fclose(fp);

	return 0;
}