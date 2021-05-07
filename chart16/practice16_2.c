#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("예제 16-2 동적 할당 영역을 배열처럼 사용\n");
	printf("\n");

	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));		// 저장공간 20바이트 할당 (5*4(int))
	if (pi == NULL)							// 메모리가 부족할 때 예외 처리 구문
	{
		printf("메모리가 부족합니다!\n");
		exit(1);
	}
	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
	free(pi);
	
	return 0;
}