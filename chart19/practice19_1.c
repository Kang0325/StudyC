#include <stdio.h>
#include "student.h"

int main()
{
	printf("���� 19-1 ����� ���� ��� ������ ����ϴ� ���α׷�\n");
	printf("\n");

	Student a = { 315, "ȫ�浿" };

	printf("�й� : %d, �̸� : %s\n", a.num, a.name);

	return 0;
}