#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 삽입 정렬 함수
void insertion_sort(char a[], int n)
{
	int i, j, k;
	char temp;

	for (i = 1; i < n; i++)
	{
		temp = a[i];
		j = i;
		while (j > 0 && a[j - 1] > temp)
		{
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;
		// 출력
		for (k = 0; k < n; k++)
		{
			printf("%c ", a[k]);
		}
		printf("\n");
	}
}

int main()
{
	char input_ary[50];
	int i = 0;
	int j = 0;
	int k = 0;
	char lower_ary[10];
	char upper_ary[10];

	while (1)
	{
		printf("문자열 입력(limit 10, 종료는 Ctrl+C) : ");
		scanf("%s", input_ary);

		if (strlen(input_ary) > 10)
		{
			printf("문자를 10개 이상 입력하셨습니다. 다시 입력해주세요\n\n");
		}
		else
		{
			if (input_ary[i] < 64 || input_ary[i] > 123)
			{
				printf("잘못된 값을 넣으셨습니다. 다시 입력해주세요\n\n");
			}
			else
			{
				break;
			}
		}
	}
	// 삽입정렬
	insertion_sort(input_ary, strlen(input_ary));

	// 대소문자 lower_ary와 upper_ary에 저장
	for (i = 0; i < strlen(input_ary); i++)
	{
		if (input_ary[i] >= 'a' && input_ary[i] <= 'z')
		{
			lower_ary[j] = input_ary[i];
			j++;
		}
		else
		{
			upper_ary[k] = input_ary[i];
			k++;
		}
	}
	// 대소문자 각각 출력
	printf("\n");
	printf("대 문 자 : ");
	for (i = 0; i < k; i++)
	{
		printf("%c ", upper_ary[i]);
	}
	printf("\n");
	printf("소 문 자 : ");
	for (i = 0; i < j; i++)
	{
		printf("%c ", lower_ary[i]);
	}
}