#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("예제 12-9 strncpy함수\n");
	printf("\n");

	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);		// 마지막에 null문자 추가 x
										// str[5] = '\0'; 추가시 apple만 출력
	printf("%s\n", str);

	return 0;
}
