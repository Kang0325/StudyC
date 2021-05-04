#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char *strcpy(char* pd, char* ps);

int main()
{
	printf("예제 12-13\n");
	printf("\n");

	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", strcpy(str, "kiwi"));

	return 0;
}

char *strcpy(char *pd, char *ps)	// 복사 받을 곳(pd)과 복사할 곳(ps)의 포인터
{
	char* po = pd;					// pd 값을 나중에 반환하기 위해 보관

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}