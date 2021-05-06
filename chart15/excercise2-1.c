#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5명 학생의 국어, 영어, 수학, 체육(4과목) 점수를 입력 받는다. (2차원 배열)
// 개인별 총점과 평균을 구한다. (평균 소수점 첫번째 자리)
// 그리고 과목별의 총점과 평균도 구하시오.
void all_sum_avg(int (*pa)[4]);
void kor_sum_avg(int (*pb)[4]);
void eng_sum_avg(int (*pc)[4]);
void mth_sum_avg(int (*pd)[4]);
void phy_sum_avg(int (*pe)[4]);

int main()
{
	printf("예제 14-excercise2\n");
	printf("\n");

	int score[5][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생 - 국어, 영어, 수학, 체육 과목순 점수 입력 : ", i + 1);
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	printf("-------------------------------------------------------------\n");

	all_sum_avg(score);

	printf("-------------------------------------------------------------\n");

	kor_sum_avg(score);
	eng_sum_avg(score);
	mth_sum_avg(score);
	phy_sum_avg(score);

	return 0;
}

void all_sum_avg(int (*pa)[4])
{
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += pa[i][j];
		}
		avg = total / 4.0;

		printf("%d번 학생 - 총점 : %d, 평균 : %.1lf\n", i + 1, total, avg);
	}
}

void kor_sum_avg(int(*pb)[4])
{
	int total1;
	double avg1;
	int i, j;

	total1 = 0;
	for (i = 0; i < 5; i++)
	{
		j = 0;
		total1 += pb[i][j];
		avg1 = total1 / 5.0;
	}
	printf("다섯 학생의 국어 점수 - 총점 : %d, 평균 : %.1lf\n", total1, avg1);
}

void eng_sum_avg(int(*pc)[4])
{
	int total2;
	double avg2;
	int i, j;

	total2 = 0;
	for (i = 0; i < 5; i++)
	{
		j = 1;
		total2 += pc[i][j];
		avg2 = total2 / 5.0;
	}
	printf("다섯 학생의 영어 점수 - 총점 : %d, 평균 : %.1lf\n", total2, avg2);
}

void mth_sum_avg(int(*pd)[4])
{
	int total3;
	double avg3;
	int i, j;

	total3 = 0;
	for (i = 0; i < 5; i++)
	{
		j = 2;
		total3 += pd[i][j];
		avg3 = total3 / 5.0;
	}
	printf("다섯 학생의 수학 점수 - 총점 : %d, 평균 : %.1lf\n", total3, avg3);
}

void phy_sum_avg(int(*pe)[4])
{
	int total4;
	double avg4;
	int i, j;

	total4 = 0;
	for (i = 0; i < 5; i++)
	{
		j = 3;
		total4 += pe[i][j];
		avg4 = total4 / 5.0;
	}
	printf("다섯 학생의 체육 점수 - 총점 : %d, 평균 : %.1lf\n", total4, avg4);
}