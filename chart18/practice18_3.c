#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("예제 18-3 문자열을 한 문자씩 파일로 출력하기 fputc함수\n");
	printf("\n");

	FILE* fp;
	char str[] = "banana";				// 출력할 문자열
	int i;

	fp = fopen("b.txt", "w");			// 쓰기 전용으로 개방

	if (fp == NULL)						// 파일 개방 확인
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	i = 0;								// 문자 배열의 첫 번째 문자부터 출력
	while (str[i] != '\0')				// 널 문자가 아니면
	{
		fputc(str[i], fp);				// 문자를 파일에 출력
		i++;							// 다음 문자로 이동
	}
	fputc('\n', fp);
	fclose(fp);

	return 0;
}