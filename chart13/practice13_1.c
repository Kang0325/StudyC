#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign();

int main()
{
	printf("예제 13-1 두 함수에서 같은 이름의 지역 변수를 사용한 경우\n");
	printf("\n");

	auto int a = 0;		// auto는 생략 가능

	assign();
	printf("main 함수 a : %d\n", a);

	return 0;
}

void assign()
{
	int a;

	a = 10;
	printf("assign 함수 a : %d\n", a);
}