#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 8-7 문자열 끝에 null 문자가 없다면?\n");
	char str[5];

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n", str);

	return 0;
}