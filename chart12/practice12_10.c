#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("예제 12-10 strcat, strncat 함수\n");
	printf("\n");

	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);

	strncat(str, "piece", 3);		// strncpy함수와 달리 마지막에 null문자를 저장
	printf("%s\n", str);

	return 0;
}
