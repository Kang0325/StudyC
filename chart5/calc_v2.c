#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("------------------------------\n");
	printf("---- Calculator_version2  ----\n");
	printf("------------------------------\n");
	printf("---- Created : 2021-04-28 ----\n");
	printf("---- Author  : ������     ----\n");
	printf("------------------------------\n");
	
	char q;
	int w, e, result;

	printf("��Ģ���� �� ��ȣ�� �����ϼ���(+,-,*,/) : ");
	scanf(" %c", &q);
	printf("��Ģ���� �� �� ���ڸ� �Է��ϼ��� : ");
	scanf("%d %d", &w, &e);

	switch (q)
	{
	case '+':
		result = w + e;
		printf("%d + %d = %d\n", w, e, result);
		break;
	case '-':
		result = w - e;
		printf("%d - %d = %d\n", w, e, result);
		break;
	case '*':
		result = w * e;
		printf("%d * %d = %d\n", w, e, result);
		break;
	case '/':
		if (e != 0)
		{
			result = w / e;
			printf("%d / %d = %d\n", w, e, result);
		}
		else
		{
			printf("0���� ���� �� �����ϴ�.");
		}
		break;
	default:
		break;
	}

	return 0;
}