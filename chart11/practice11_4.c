#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 11-4 버퍼를 사용하는 문자 입력\n");
	printf("\n");

	char ch;
	int i;

	printf("문자 입력 : ");
	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}