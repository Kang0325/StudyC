#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int o, blank, star;
	int q, blank1, star1;
	int num;

	for (o = 0; o < 7; o++)
	{
		for (blank = 6; blank > o ; blank--)
		{
			printf(" ");
		}
		for (star = 0; star < 2 * o + 1; star++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (q = 0; q < 7; q++)
	{
		for (blank1 = 0; blank1 < q; blank1++)
		{
			printf(" ");
		}
		for (star1 = 7; star1 > q; star1--)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}