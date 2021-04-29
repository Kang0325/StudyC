#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 6-1
	printf("예제 6-1 while문\n");
	int a1 = 1;

	while (a1 < 10)
	{
		a1 = a1 * 2;
	}
	printf("a1 : %d\n", a1);
	printf("\n");

	// 6-2
	printf("예제 6-2 for문\n");
	int a2 = 1, i;

	for (i = 0; i < 3; i++)
	{
		a2 = a2 * 2;
	}
	printf("a2 : %d\n", a2);
	printf("\n");

	// 6-3
	printf("예제 6-3 do~while\n");
	int a3 = 1;

	do
	{
		a3 = a3 * 2;
	} while (a3 < 10);
	printf("a3 :%d\n", a3);
	printf("\n");

	// 6-4
	printf("예제 6-4 중첩 반복문으로 별 출력\n");
	int a4, b4;

	for (a4 = 0; a4 < 3; a4++)
	{
		for (b4 = 0; b4 < 5; b4++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// 6-5
	printf("예제 6-5 break\n");
	int a5;
	int sum = 0;

	for (a5 = 1; a5 <= 10; a5++)
	{
		sum += a5;
		if (sum > 30) break;
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", a5);
	printf("\n");

	return 0;
}