#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 13-5 레지스터 변수를 반복문에 사용한 예\n");
	printf("\n");

	register int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
