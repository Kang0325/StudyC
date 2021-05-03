#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 8-6 빈칸 포함한 문자열 입력\n");
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	printf("입력된 문자열 : ");
	puts(str);

	return 0;
}