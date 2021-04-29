#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void intro(void)
{
	printf("------------------------------\n");
	printf("---- Calculator_version5  ----\n");
	printf("------------------------------\n");
	printf("---- Created : 2021-04-29 ----\n");
	printf("---- Author  : 강동훈     ----\n");
	printf("------------------------------\n");
}

void end(void)
{
	while (1)
	{
		char quit;

		printf("종료하시겠습니까?(y/n) : ");
		scanf(" %c", &quit);
		if (quit == 'y' || quit == 'Y')
		{
			printf("사칙연산을 종료합니다.\n");
			exit(1);
		}
		else if (quit == 'n' || quit == 'N')
		{
			printf("사칙연산을 계속합니다.\n");
			break;
		}
		else
		{
			printf("y 또는 n을 입력해주세요.\n");
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
		printf("0으로 나눌 수 없습니다.\n");
	}
}

int main()
{
	while (1)
	{
		char q;
		int w, e;

		intro();

		printf("사칙연산 할 기호를 선택하세요(+,-,*,/) : ");
		scanf(" %c", &q);
		printf("사칙연산 할 두 숫자를 입력하세요 : ");
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