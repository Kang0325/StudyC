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
		printf("---- Author  : ������     ----\n");
		printf("------------------------------\n");

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

		while (1)
		{
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

	return 0;
}