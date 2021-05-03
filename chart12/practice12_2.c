#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 12-2 포인터로 문자열 사용 방법\n");
	printf("\n");

	char *dessert = "apple";

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";
	printf("오늘 후식은 %s입니다.\n", dessert);

	return 0;
}