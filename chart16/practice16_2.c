#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("���� 16-2 ���� �Ҵ� ������ �迭ó�� ���\n");
	printf("\n");

	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));		// ������� 20����Ʈ �Ҵ� (5*4(int))
	if (pi == NULL)							// �޸𸮰� ������ �� ���� ó�� ����
	{
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);
	
	return 0;
}