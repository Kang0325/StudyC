#include <stdio.h>

void print_char(char ch, int count); // 함수 선언

int main(void)
{
	// 7-3
	printf("예제 7-3\n");
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