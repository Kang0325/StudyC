#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5�� �л��� ����, ����, ����, ü��(4����) ������ �Է� �޴´�. (2���� �迭)
// ���κ� ������ ����� ���Ѵ�. (��� �Ҽ��� ù��° �ڸ�)
// �׸��� ������ ������ ��յ� ���Ͻÿ�.

int main()
{
	printf("���� 14-excercise2\n");
	printf("\n");

	int score[5][4];
	int total;
	double avg;
	int i, j;
	int total1, total2, total3, total4;
	double avg1, avg2, avg3, avg4;

	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л� - ����, ����, ����, ü�� ����� ���� �Է� : ", i+1);
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	printf("-------------------------------------------------------------\n");

	for (i = 0; i < 5; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		
		printf("%d�� �л� - ���� : %d, ��� : %.1lf\n", i+1, total, avg);
	}

	printf("-------------------------------------------------------------\n");

	total1 = 0;
	for (i = 0; i < 5; i++)
	{
		j = 0;
		total1 += score[i][j];
		avg1 = total1 / 5.0;
	}
	printf("�ټ� �л��� ���� ���� - ���� : %d, ��� : %.1lf\n", total1, avg1);

	total2 = 0;
	for (i = 0; i < 5; i++)
	{
		j = 1;
		total2 += score[i][j];
		avg2 = total2 / 5.0;
	}
	printf("�ټ� �л��� ���� ���� - ���� : %d, ��� : %.1lf\n", total2, avg2);

	total3 = 0;
	for (i = 0; i < 5; i++)
	{
		j = 2;
		total3 += score[i][j];
		avg3 = total3 / 5.0;
	}
	printf("�ټ� �л��� ���� ���� - ���� : %d, ��� : %.1lf\n", total3, avg3);

	total4 = 0;
	for (i = 0; i < 5; i++)
	{
		j = 3;
		total4 += score[i][j];
		avg4 = total4 / 5.0;
	}
	printf("�ټ� �л��� ü�� ���� - ���� : %d, ��� : %.1lf\n", total4, avg4);

	return 0;
}