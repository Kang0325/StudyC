#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 5-1
	printf("예제 5-1 if문\n");
	int a1 = 20, b1 = 0;

	if (a1 > 10)
	{
		b1 = a1;
	}
	printf("a1 : %d, b1 : %d\n", a1, b1);
	printf("\n");

	// 5-2
	printf("예제 5-2 if~else문\n");
	int a2 = 10;
	
	if (a2 >= 0)
	{
		a2 = 1;
	}
	else
	{
		a2 = -1;
	}
	printf("a2 : %d\n", a2);
	printf("\n");

	// 5-3
	printf("예제 5-3 if~else if~else\n");
	int a3 = 0, b3 = 0;

	if (a3 > 0)
	{
		b3 = 1;
	}
	else if (a3 == 0)
	{
		b3 = 2;
	}
	else
	{
		b3 = 3;
	}
	printf("b3 : %d\n", b3);
	printf("\n");

	// 5-4
	printf("예제 5-4 if문 중첩\n");
	int a4 = 20, b4 = 10;

	if (a4 > 10)
	{
		if (b4 >= 0)
		{
			b4 = 1;
		}
		else
		{
			b4 = -1;
		}
	}
	printf("a4 : %d, b4 : %d\n", a4, b4);
	printf("\n");

	// 5-5
	printf("예제 5-5\n");
	int a5 = 10, b5 = 20;

	if (a5 < 0)
	{
		if (b5 > 0)
		{
			printf("ok(if)\n");
		}
	}
	else
	{
		printf("ok(else)\n");
	}
	printf("\n");

	// 5-6
	printf("예제 5-6 switch~case\n");
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("m : %d\n", m);
	printf("\n");
	
	return 0;
}