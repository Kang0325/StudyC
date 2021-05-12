#include <stdio.h>
#include "student.h"

int main()
{
	printf("예제 19-1 사용자 저의 헤더 파일을 사용하는 프로그램\n");
	printf("\n");

	Student a = { 315, "홍길동" };

	printf("학번 : %d, 이름 : %s\n", a.num, a.name);

	return 0;
}