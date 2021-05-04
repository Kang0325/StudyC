#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_ten(int a);

int main()
{
	printf("예제 13-6 10을 더하기 위해 값을 인수로 주는 경우\n");
	printf("\n");

	int a = 10;

	add_ten(a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)
{
	a = a + 10;
}
