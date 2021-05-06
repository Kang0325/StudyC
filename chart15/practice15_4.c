#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 15-4 주소로 쓰이는 배열명과 배열의 주소 비교\n");
	printf("\n");

	int ary[5];

	printf("  ary의 값 : %u\t", ary);
	printf("ary의 주소 : %u\n", &ary);
	printf("   ary + 1 : %u\t", ary+1);
	printf("  &ary + 1 : %u\n", &ary+1);

	return 0;
}
