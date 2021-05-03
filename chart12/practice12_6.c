#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 12-6 개행 문자로 인해 gets함수가 입력을 못하는 경우\n");
	printf("\n");

	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);
	fgetc(stdin);
	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}