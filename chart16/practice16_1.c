#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("예제 16-1 동적 할당한 저장 공간을 사용하는 프로그램\n");
	printf("\n");

	int* pi;
	double* pd;

	pi = /*(int *)*/malloc(sizeof(int)); // 생략 가능
	if (pi == NULL)
	{
		printf(" # 메모리가 부족합니다.\n");
		exit(1);
	}
	pd = /*(double *)*/malloc(sizeof(double)); // 생략 가능

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi);
	free(pd);

	return 0;
}