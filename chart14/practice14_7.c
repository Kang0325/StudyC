#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 14-7 ���� ���� 1���� �迭�� 2���� �迭ó�� ���\n");
	printf("\n");

	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int *pary[3] = { ary1,ary2,ary3 };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}

	return 0;
}