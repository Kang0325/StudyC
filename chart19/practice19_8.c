#include <stdio.h>

void input_data(int*, int*);
double average(int, int);

int main()
{
	printf("���� 19-8 �� ������ ����� ���ϴ� ���α׷�\n");
	printf("\n");

	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);

	return 0;
}