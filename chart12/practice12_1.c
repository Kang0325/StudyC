#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 12-1 ���ڿ� ����� �ּҶ� ����\n");
	printf("\n");

	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");		// �ּҰ� ���
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);		// �ּҰ� ���
	printf("ù ��° ���� : %c\n", *"apple");					// ���� ���� ����
	printf("�� ��° ���� : %c\n", *("apple" + 1));				// ������ �����
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);	// �迭 ǥ����

	return 0;
}