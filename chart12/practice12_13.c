#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char *strcpy(char* pd, char* ps);

int main()
{
	printf("���� 12-13\n");
	printf("\n");

	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", strcpy(str, "kiwi"));

	return 0;
}

char *strcpy(char *pd, char *ps)	// ���� ���� ��(pd)�� ������ ��(ps)�� ������
{
	char* po = pd;					// pd ���� ���߿� ��ȯ�ϱ� ���� ����

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}