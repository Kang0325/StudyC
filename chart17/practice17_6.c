#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct score
{
	int kor, eng, math;
};

int main()
{
	printf("예제 17-6 구조체 포인터의 사용\n");
	printf("\n");

	struct score yuni = { 90,80,70 };
	struct score* ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);		// 구조체 포인터로 멤버 접근
	printf("영어 : %d\n", ps -> eng);		// -> 연산자 사용 (위랑 같음, 더 많이 씀)
	printf("수학 : %d\n", ps -> math);

	return 0;
}