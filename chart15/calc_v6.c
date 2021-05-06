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

		printf("사칙연산 할 기호를 선택하세요(+,-,*,/) : ");
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

void func(int (*fp)(int, int))
{
	int w, e;
	int result1;

	printf("사칙연산 할 두 숫자를 입력하세요 : ");
	scanf("%d %d", &w, &e);

	result1 = fp(w, e);
	printf("결과값은 %d입니다.\n", result1);
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