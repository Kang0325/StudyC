#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 11-7 ���� ������ ������ �ϴ� ���\n");
	printf("\n");

	int num, grade;

	printf("�й� �Է� : ");
	scanf("%d", &num);
	getchar();					// ���ۿ� ���� �ִ� ���� ���� ����
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}