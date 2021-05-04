#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 14-3 여러 개의 동물 이름을 입출력하는 프로그램\n");
	printf("\n");

	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);		// 행의 수 계산식 (100/20)=5
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s", animal[i]);
	}

	return 0;
}
