#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func();

int main()
{
	printf("���� 19-4 �̹� ���ǵ� ��ũ���� ���\n");
	printf("\n");

	printf("������ ��¥�� �ð� : %s, %s\n\n", __DATE__, __TIME__);
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %d\n", __LINE__);

#line 100 "macro.c"
	func();

	return 0;
}

void func()
{
	printf("\n");
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %d\n", __LINE__);
}