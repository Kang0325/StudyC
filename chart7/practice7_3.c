#include <stdio.h>

void print_char(char ch, int count); // �Լ� ����

int main(void)
{
	// 7-3
	printf("���� 7-3\n");
	print_char('@', 5);
	printf("\n");

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return;
}