#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("���� 16-3 calloc, realloc �Լ��� ����� ��� �Է�\n");
	printf("\n");

	int* pi;
	int* pi_back;
	int size = 5;
	int count = 0;
	int num, i;
	
	pi = (int*)calloc(size, sizeof(int));			// ���� 5���� ���� ���� �Ҵ�

	while (1)
	{
		printf("����� �Է��ϼ��� : ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)							// ���� ���� ��� ����
		{
			size += 5;								// ũ�� �÷��� ���Ҵ�
			pi_back = pi;							// �ؿ� pi�� null���� ���� ��� ��� ����
			pi = (int*)realloc(pi, size * sizeof(int));
			if (pi == NULL)							// null���� ��� pi ���󺹱�
			{
				pi = pi_back;
			}
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);
	return 0;
}