#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 11-5 �Է� ������ �ƽ�Ű �ڵ� �� ���\n");
	printf("\n");

	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == EOF) break;		// -1 = EOF
		printf("%d", ch);
	}

	return 0;
}