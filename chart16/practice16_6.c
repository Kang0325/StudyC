#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("예제 16-6 명령행 인수를 출력하는 프로그램\n");
	printf("\n");

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}