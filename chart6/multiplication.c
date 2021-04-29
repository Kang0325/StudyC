#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a,b,num,result;

	printf("보고 싶은 단 수를 입력하세요 : ");
	scanf("%d", &num);
	printf("보고 싶은 행 수를 입력하세요 : ");
	scanf("%d", &b);

	for (a = 1; a <= b ; a++)
	{
		result = b * num;
		printf("%d * %d = %d\n", num, a, result);
	}
	return 0;
}