#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("���� 16-6 ����� �μ��� ����ϴ� ���α׷�\n");
	printf("\n");

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}