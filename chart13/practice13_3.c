#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign10();
void assign20();
int a;

int main()
{
	printf("예제 13-3 전역 변수의 사용\n");
	printf("\n");

	printf("함수 호출 전 a 값 : %d\n", a);
	
	assign10();
	assign20();

	printf("함수 호출 후 a 값  : %d\n", a);

	return 0;
}

void assign10()
{
	a = 10;
}

void assign20()
{
	int a;
	a = 20;
}