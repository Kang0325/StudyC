#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign10();
void assign20();
int a;

int main()
{
	printf("���� 13-3 ���� ������ ���\n");
	printf("\n");

	printf("�Լ� ȣ�� �� a �� : %d\n", a);
	
	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a ��  : %d\n", a);

	return 0;
}

void assign10()
{
	a = 10;
}

void assign20()
{
	int a;
	a = 20;
}