#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	while (1)
	{
		char quit;
		char q;
		int w, e, result;

		printf("------------------------------\n");
		printf("---- Calculator_version3  ----\n");
		printf("------------------------------\n");
		printf("---- Created : 2021-04-29 ----\n");
		printf("---- Author  : 강동훈     ----\n");
		printf("------------------------------\n");

		printf("사칙연산 할 기호를 선택하세요(+,-,*,/) : ");
		scanf(" %c", &q);
		printf("사칙연산 할 두 숫자를 입력하세요 : ");
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
				printf("0으로 나눌 수 없습니다.");
			}
			break;
		default:
			break;
		}

		while (1)
		{
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

	return 0;
}