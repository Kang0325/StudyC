#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student			// �޸� �Ҵ�Ǵ� ���� �ƴ϶� �ʱ�ȭ �ȵ�
{
	int id;
	char name[20];
	double grade;
};

int main()
{
	printf("���� 17-4 �ְ� ������ �л� ������ ���\n");
	printf("\n");

	struct student s1 = { 315,"ȫ�浿",2.4 },
		s2 = { 316,"�̼���",3.7 },
		s3 = { 317,"�������",4.4 };

	struct student max;				// �ְ� ������ ������ ����ü ����

	max = s1;								// s1�� �ְ� �������� ����
	if (s2.grade > max.grade) max = s2;		// s2�� �� ������ max�� ����
	if (s3.grade > max.grade) max = s3;		// s3�� �� ������ max�� ����

	printf("�й� : %d\n", max.id);
	printf("�̸� : %s\n", max.name);
	printf("���� : %.1lf\n", max.grade);

	return 0;
}