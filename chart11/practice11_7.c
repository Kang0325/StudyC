#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 11-7 버퍼 내용을 지워야 하는 경우\n");
	printf("\n");

	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);
	getchar();					// 버퍼에 남아 있는 개행 문자 제거
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}