#include <stdio.h>

void input_data(int*, int*);
double average(int, int);

int main()
{
	printf("예제 19-8 두 정수의 평균을 구하는 프로그램\n");
	printf("\n");

	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

	return 0;
}