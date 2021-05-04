#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 13-2 블록 안에 지역 변수를 사용하여 두 변수를 교환하는 프로그램\n");
	printf("\n");

	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{						// 블록 시작
		int temp;

		temp = a;			//
		a = b;				//
		b = temp;			// a와 b를 교환하는 과정
	}						// 블록 끝
	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}
