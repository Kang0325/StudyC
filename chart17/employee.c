#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	5���� ������̵�, ����̸�, �Ѵޱ޿��� �Է¹޾� ����� ��
	5���� ����� �޿� �Ѿװ� ��� �޿����� ���Ͻÿ�.
	(�̸��� �����Ҵ翡 �����Ѵ�.)
*/

typedef struct employee
{
	int id;			// �����ȣ
	char* name;		// ����̸�
	int salary;		// �޿�
}Employee;			// *Employee�� �ٿ� ��� ����*

int main()
{
	char str[20];
	int i;
	int sum = 0;
	double avg;
	Employee emp[5];

	for (i = 0; i < 5; i++)
	{
		
		printf("%d�� ������̵�, ����̸�, �Ѵޱ޿�(����) �Է� : ",i+1);
		scanf("%d %s %d", &(emp[i].id), str, &(emp[i].salary));

		emp[i].name = (char*)malloc(strlen(str)+1);
		if (emp[i].name != NULL) strcpy(emp[i].name, str);
	}
	
	printf("-------------------------------------------------------\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d�� ������̵� : %d, ����̸� : %s, �Ѵޱ޿� : %d����\n",
			i+1, emp[i].id, emp[i].name, emp[i].salary);
	}

	printf("-------------------------------------------------------\n");

	for (i = 0; i < 5; i++)
	{
		sum += emp[i].salary;
	}
	avg = sum / 5.0;
	printf("�ټ� ����� �� �޿� : %d����, ��� �޿� : %.2lf����\n", sum, avg);
	
	free(str);

	return 0;
}