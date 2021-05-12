#include <stdio.h>
#include "main_user.h"

int main()
{
	int n1, n2;
	int result;

	input_data(&n1, &n2);
	result = sum(n1, n2);
	printf("두 정수의 합 : %d\n", result);

	return 0;
}