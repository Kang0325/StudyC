#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 12-2 �����ͷ� ���ڿ� ��� ���\n");
	printf("\n");

	char *dessert = "apple";

	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	dessert = "banana";
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

	return 0;
}