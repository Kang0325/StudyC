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
	printf("���� 19-7 #pragma�� ����� ����Ʈ ����θ�Ʈ ����\n");
	printf("\n");

	printf("Sample1 ����ü�� ũ�� : %d\n", sizeof(Sample1));
	printf("Sample2 ����ü�� ũ�� : %d\n", sizeof(Sample2));

	return 0;
}