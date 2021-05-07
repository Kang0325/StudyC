#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("예제 16-3 calloc, realloc 함수를 사용한 양수 입력\n");
	printf("\n");

	int* pi;
	int* pi_back;
	int size = 5;
	int count = 0;
	int num, i;
	
	pi = (int*)calloc(size, sizeof(int));			// 먼저 5개의 저장 공간 할당

	while (1)
	{
		printf("양수만 입력하세요 : ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)							// 저장 공간 모두 사용시
		{
			size += 5;								// 크기 늘려서 재할당
			pi_back = pi;							// 밑에 pi가 null값을 받을 경우 대비 저장
			pi = (int*)realloc(pi, size * sizeof(int));
			if (pi == NULL)							// null값일 경우 pi 원상복구
			{
				pi = pi_back;
			}
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);
	return 0;
}