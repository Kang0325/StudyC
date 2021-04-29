#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("------------------------------\n");
	printf("---- Calculator_version2  ----\n");
	printf("------------------------------\n");
	printf("---- Created : 2021-04-28 ----\n");
	printf("---- Author  : 강동훈     ----\n");
	printf("------------------------------\n");
	
	char q;
	int w, e, result;

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

	return 0;
}