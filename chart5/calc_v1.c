#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("------------------------------\n");
	printf("---- Calculator_version1  ----\n");
	printf("------------------------------\n");
	printf("---- Created : 2021-04-28 ----\n");
	printf("---- Author  : 강동훈     ----\n");
	printf("------------------------------\n");
	int x, y, z;
	int plus, minus, mul, div;

	printf("진행하실 사칙연산을 선택하세요\n1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
	scanf("%d", &z);
	printf("사칙연산 할 두 값을 입력하세요 :\n");
	scanf("%d %d", &x, &y);

	if (z == 1)
	{
		plus = x + y;
		printf("%d + %d = %d", x, y, plus);
	}
	if (z == 2)
	{
		minus = x - y;
		printf("%d - %d = %d", x, y, minus);
	}
	if (z == 3)
	{
		mul = x * y;
		printf("%d * %d = %d", x, y, mul);
	}
	if (z == 4)
	{
		if (y != 0)
		{
			div = x / y;
			printf("%d / %d = %d", x, y, div);
		}
		else
		{
			printf("0으로는 나눌 수 없습니다.");
		}
	}

	return 0;
}
	