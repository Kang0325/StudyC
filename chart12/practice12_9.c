#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("���� 12-9 strncpy�Լ�\n");
	printf("\n");

	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);		// �������� null���� �߰� x
										// str[5] = '\0'; �߰��� apple�� ���
	printf("%s\n", str);

	return 0;
}
