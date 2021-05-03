#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 12-7 문자열 출력하는 puts와 fputs함수\n");
	printf("\n");

	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);			// puts함수 자동 개행 o
	fputs(ps, stdout);	// fputs함수 자동 개행 x
	puts("milk");

	return 0;
}
