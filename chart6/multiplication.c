#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a,b,num,result;

	printf("���� ���� �� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("���� ���� �� ���� �Է��ϼ��� : ");
	scanf("%d", &b);

	for (a = 1; a <= b ; a++)
	{
		result = b * num;
		printf("%d * %d = %d\n", num, a, result);
	}
	return 0;
}