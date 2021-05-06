#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void intro();
void end();
void func(int (*fp)(int, int));
int sum(int w, int e);
int min(int w, int e);
int mul(int w, int e);
int div(int w, int e);

int main()
{
	while (1)
	{
		char q;
		int w, e;

		intro();

		printf("��Ģ���� �� ��ȣ�� �����ϼ���(+,-,*,/) : ");
		scanf(" %c", &q);

		if (q == '+')
			func(sum);
		else if (q == '-')
			func(min);
		else if (q == '*')
			func(mul);
		else if (q == '/')
			func(div);

		end();
	}
	return 0;
}

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

void func(int (*fp)(int, int))
{
	int w, e;
	int result1;

	printf("��Ģ���� �� �� ���ڸ� �Է��ϼ��� : ");
	scanf("%d %d", &w, &e);

	result1 = fp(w, e);
	printf("������� %d�Դϴ�.\n", result1);
}

int sum(int w, int e)
{
	return (w + e);
}

int min(int w, int e)
{
	return (w - e);
}

int mul(int w, int e)
{
	return (w * e);
}

int div(int w, int e)
{
	return (w / e);
}