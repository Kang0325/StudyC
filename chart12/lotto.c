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
			printf("%d 번째 ", i + 1);
			printf("로또 번호 입력 : ");
			scanf("%d", lt + i);				// for문이므로 lt 값에도 +i를 해줘야함

			for (j = 0; j < i; j++)
			{
				if (*(lt + i) == *(lt + j))
				{
					printf("번호가 중복 되었습니다.\n");
					i--;
					break;
				}
			}
		}
		else
		{
			printf("45 이하의 수를 입력하세요.\n");
			i--;
		}
	}
}

void print_lotto(int* lt)
{
	int i;
	printf("입력한 여섯 자리 로또 번호 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d  ", *(lt+i));
	}
	
}