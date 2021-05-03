#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_lotto(int* lt);
void print_lotto(int* lt);

int main()
{
	printf("---------------------------\n");
	printf("-----  Lotto Program  -----\n");
	printf("---------------------------\n");
	
	int lotto[6];

	input_lotto(lotto);
	print_lotto(lotto);

	return 0;
}

void input_lotto(int* lt)
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		if (*(lt + i) < 46)
		{
			printf("%d ��° ", i + 1);
			printf("�ζ� ��ȣ �Է� : ");
			scanf("%d", lt + i);				// for���̹Ƿ� lt ������ +i�� �������

			for (j = 0; j < i; j++)
			{
				if (*(lt + i) == *(lt + j))
				{
					printf("��ȣ�� �ߺ� �Ǿ����ϴ�.\n");
					i--;
					break;
				}
			}
		}
		else
		{
			printf("45 ������ ���� �Է��ϼ���.\n");
			i--;
		}
	}
}

void print_lotto(int* lt)
{
	int i;
	printf("�Է��� ���� �ڸ� �ζ� ��ȣ : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d  ", *(lt+i));
	}
	
}