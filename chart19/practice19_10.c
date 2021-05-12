#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "practice19_10_point.h"
#include "practice19_10_line.h"

int main()
{
	printf("예제 19-10 헤더 파일의 중복 포함 문제 해결 방법\n");
	printf("\n");

	Line a = { {1,2},{5,6} };
	Point b;

	b.x = (a.first.x + a.second.x) / 2;
	b.y = (a.first.y + a.second.y) / 2;
	printf("선의 가운데 점의 좌표 : (%d, %d)\n", b.x, b.y);

	return 0;
}