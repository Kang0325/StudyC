#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct score
{
	int kor, eng, math;
};

int main()
{
	printf("���� 17-6 ����ü �������� ���\n");
	printf("\n");

	struct score yuni = { 90,80,70 };
	struct score* ps = &yuni;

	printf("���� : %d\n", (*ps).kor);		// ����ü �����ͷ� ��� ����
	printf("���� : %d\n", ps -> eng);		// -> ������ ��� (���� ����, �� ���� ��)
	printf("���� : %d\n", ps -> math);

	return 0;
}