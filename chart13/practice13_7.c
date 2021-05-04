#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_ten(int *pa);

int main()
{
	printf("예제 13-7 포인터를 써서 변수의 값에 10을 더하는 경우\n");
	printf("\n");

	int a = 10;

	add_ten(&a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int *pa)
{
	*pa = *pa + 10;
}
