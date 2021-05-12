#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(push, 1)
typedef struct
{
	char ch;
	int in;
} Sample1;

#pragma pack(pop)
typedef struct
{
	char ch;
	int in;
} Sample2;

int main()
{
	printf("예제 19-7 #pragma를 사용한 바이트 얼라인먼트 변경\n");
	printf("\n");

	printf("Sample1 구조체의 크기 : %d\n", sizeof(Sample1));
	printf("Sample2 구조체의 크기 : %d\n", sizeof(Sample2));

	return 0;
}