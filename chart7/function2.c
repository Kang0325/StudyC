#include <stdio.h>

void func() // �Է°� ����� ���� �Լ�
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("res : %d", res);

}

int main()
{
	func(); // func �Լ� ȣ��
	return 0;
}