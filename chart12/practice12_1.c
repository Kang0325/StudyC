#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 12-1 문자열 상수가 주소란 증거\n");
	printf("\n");

	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");		// 주소값 출력
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);		// 주소값 출력
	printf("첫 번째 문자 : %c\n", *"apple");					// 간접 참조 연산
	printf("두 번째 문자 : %c\n", *("apple" + 1));				// 포인터 연산식
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);	// 배열 표현식

	return 0;
}