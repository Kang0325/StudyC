#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VER 7
#define BIT16

int main()
{
	printf("���� 19-6\n");
	printf("\n");

	int max;

#if VER >= 6
	printf("���� %d�Դϴ�.\n", VER);
#endif

#ifdef BIT16
	max = 32767;
#else
	max = 2147483647;
#endif

	printf("int�� ������ �ִ� : %d\n", max);

	return 0;
}