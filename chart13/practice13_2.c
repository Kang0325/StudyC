#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 13-2 ��� �ȿ� ���� ������ ����Ͽ� �� ������ ��ȯ�ϴ� ���α׷�\n");
	printf("\n");

	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
	{						// ��� ����
		int temp;

		temp = a;			//
		a = b;				//
		b = temp;			// a�� b�� ��ȯ�ϴ� ����
	}						// ��� ��
	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);

	return 0;
}
