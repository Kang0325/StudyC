#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	printf("%p %p\n", &a, pa);

	printf("---------------------------------------\n");

	int ary1[2] = { 1,2 };
	int* pary1 = ary1;
	// char* pary1 = ary1;			포인터 쓸 때 동일한 타입으로 넣어야함 (실행은 되지만 주소값이 다름)
	printf("%p %p\n", ary1, pary1);
	printf("%p %p\n", ary1 + 1, pary1 + 1);

	printf("---------------------------------------\n");

	char ary2[2] = { 'a','b' };
	char* pary2 = ary2;
	printf("%p %p\n", ary2, pary2);
	printf("%p %p\n", ary2 + 1, pary2 + 1);
	
	printf("---------------------------------------\n");

	int ary3[][2] = { {1,2,},{3,4} };
	int* pary3 = ary3;
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n", ary3 + 1, pary3 + 1);
	
	printf("---------------------------------------\n");

	char* ary4[2] = { "hi","bye" };
	char** pary4 = ary4;
	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n", ary4 + 1, pary4 + 1);

	return 0;
}