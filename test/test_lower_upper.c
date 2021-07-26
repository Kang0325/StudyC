#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ���� ���� �Լ�
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
		// ���
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
		printf("���ڿ� �Է�(limit 10, ����� Ctrl+C) : ");
		scanf("%s", input_ary);

		if (strlen(input_ary) > 10)
		{
			printf("���ڸ� 10�� �̻� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n\n");
		}
		else
		{
			if (input_ary[i] < 64 || input_ary[i] > 123)
			{
				printf("�߸��� ���� �����̽��ϴ�. �ٽ� �Է����ּ���\n\n");
			}
			else
			{
				break;
			}
		}
	}
	// ��������
	insertion_sort(input_ary, strlen(input_ary));

	// ��ҹ��� lower_ary�� upper_ary�� ����
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
	// ��ҹ��� ���� ���
	printf("\n");
	printf("�� �� �� : ");
	for (i = 0; i < k; i++)
	{
		printf("%c ", upper_ary[i]);
	}
	printf("\n");
	printf("�� �� �� : ");
	for (i = 0; i < j; i++)
	{
		printf("%c ", lower_ary[i]);
	}
}