#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� 14-6 ������ �迭�� ���� ���� ���ڿ� ���\n");
	printf("\n");

	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}
