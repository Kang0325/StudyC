#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("���� 12-10 strcat, strncat �Լ�\n");
	printf("\n");

	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);

	strncat(str, "piece", 3);		// strncpy�Լ��� �޸� �������� null���ڸ� ����
	printf("%s\n", str);

	return 0;
}
