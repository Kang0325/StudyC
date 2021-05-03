#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 11-2 공백이나 제어 문자의 입력\n");
	printf("\n");

	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);
	// 2개의 문자를 연속 입력
	printf("[%c%c]", ch1, ch2);
	// 입력된 문자 출력

	return 0;
}