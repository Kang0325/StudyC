#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 14-excercise1\n");
	printf("\n");

	int i;
	int length;
	char ch[100];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", ch);

	length = strlen(ch);

	for (i = 0; i < length/2; i++)
	{
		if (ch[i] != ch[length - i - 1])
		{
			printf("ȸ���� �ƴմϴ�.\n");
			break;
		}
		printf("ȸ���Դϴ�.");
	}
	
	return 0;
}
