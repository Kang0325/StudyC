#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("���� 18-3 ���ڿ��� �� ���ھ� ���Ϸ� ����ϱ� fputc�Լ�\n");
	printf("\n");

	FILE* fp;
	char str[] = "banana";				// ����� ���ڿ�
	int i;

	fp = fopen("b.txt", "w");			// ���� �������� ����

	if (fp == NULL)						// ���� ���� Ȯ��
	{
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	i = 0;								// ���� �迭�� ù ��° ���ں��� ���
	while (str[i] != '\0')				// �� ���ڰ� �ƴϸ�
	{
		fputc(str[i], fp);				// ���ڸ� ���Ͽ� ���
		i++;							// ���� ���ڷ� �̵�
	}
	fputc('\n', fp);
	fclose(fp);

	return 0;
}