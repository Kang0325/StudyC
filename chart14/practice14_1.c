#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 14-1 �л� 3���� �� ���� ������ ����� ���ϴ� ���α׷� (2���� �迭)\n");
	printf("\n");

	int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("�� ������ ���� �Է� : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("���� : %d, ��� : %.2lf\n", total, avg);
	}

	return 0;
}
