#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "practice19_10_point.h"
#include "practice19_10_line.h"

int main()
{
	printf("���� 19-10 ��� ������ �ߺ� ���� ���� �ذ� ���\n");
	printf("\n");

	Line a = { {1,2},{5,6} };
	Point b;

	b.x = (a.first.x + a.second.x) / 2;
	b.y = (a.first.y + a.second.y) / 2;
	printf("���� ��� ���� ��ǥ : (%d, %d)\n", b.x, b.y);

	return 0;
}