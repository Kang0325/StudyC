#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 14-5 2개 반 3명 학생의 4과목 점수를 저장 (3차원 배열)\n");
	printf("\n");

	int score[2][3][4] = {
		{{72,80,95,60}, {68,98,83,90}, {75,72,84,90}},
		{{66,85,90,88}, {95,92,88,95}, {43,72,56,75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d반 점수...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
