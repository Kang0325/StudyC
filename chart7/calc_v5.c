#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void intro(void)
{
	printf("------------------------------\n");
	printf("---- Calculator_version5  ----\n");
	printf("------------------------------\n");
	printf("---- Created : 2021-04-29 ----\n");
	printf("---- Author  : ������     ----\n");
	printf("------------------------------\n");
}

void end(void)
{
	while (1)
	{
		char quit;

		printf("�����Ͻðڽ��ϱ�?(y/n) : ");
		scanf(" %c", &quit);
		if (quit == 'y' || quit == 'Y')
		{
			printf("��Ģ������ �����մϴ�.\n");
			exit(1);
		}
		else if (quit == 'n' || quit == 'N')
		{
			printf("��Ģ������ ����մϴ�.\n");
			break;
		}
		else
		{
			printf("y �Ǵ� n�� �Է����ּ���.\n");
		}
	}
}

void sum(int w, int e)
{
	int result1;
	result1 = w + e;
	printf("%d + %d = %d\n", w, e, result1);
}

void min(int w, int e)
{
	int result1;
	result1 = w - e;
	printf("%d - %d = %d\n", w, e, result1);
}

void mul(int w, int e)
{
	int result1;
	result1 = w * e;
	printf("%d * %d = %d\n", w, e, result1);
}

void div(int w, int e)
{
	if (e != 0)
	{
		int result1;
		result1 = w / e;
		printf("%d / %d = %d\n", w, e, result1);
	}
	else
	{
		printf("0���� ���� �� �����ϴ�.\n");
	}
}

int main()
{
	while (1)
	{
		char q;
		int w, e;

		intro();

		printf("��Ģ���� �� ��ȣ�� �����ϼ���(+,-,*,/) : ");
		scanf(" %c", &q);
		printf("��Ģ���� �� �� ���ڸ� �Է��ϼ��� : ");
		scanf("%d %d", &w, &e);

		if (q == '+')
			sum(w, e);
		else if (q == '-')
			min(w, e);
		else if (q == '*')
			mul(w, e);
		else if (q == '/')
			div(w, e);

		end();
	}
	return 0;
}