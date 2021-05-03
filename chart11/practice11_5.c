#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 11-5 입력 문자의 아스키 코드 값 출력\n");
	printf("\n");

	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == EOF) break;		// -1 = EOF
		printf("%d", ch);
	}

	return 0;
}