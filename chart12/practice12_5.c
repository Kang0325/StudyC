#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 12-5 fgets�Լ��� ���ڿ� �Է� ���\n");
	printf("\n");

	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	// ���߿� �Է��� ����
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}