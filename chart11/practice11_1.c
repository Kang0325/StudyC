#include <stdio.h>

int main()
{
	printf("���� 11-1 �빮�ڸ� �ҹ��ڷ� ����\n");
	printf("\n");

	char small, cap = 'G';						// char�� ���� ����� �ʱ�ȭ

	if ((cap >= 'A') && (cap <= 'Z'))			// �빮�� �������
	{
		small = cap + ('a' - 65);				// ��/�ҹ����� ���̸� ���� �ҹ��ڷ� ��ȯ ('A' = 65)
	}
	printf("�빮�� : %c %c", cap, '\n');		// '\n'�� %c�� ����ϸ� ���� �ٲ��
	printf("�ҹ��� : %c", small);

	return 0;
}