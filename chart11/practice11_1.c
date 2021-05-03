#include <stdio.h>

int main()
{
	printf("예제 11-1 대문자를 소문자로 변경\n");
	printf("\n");

	char small, cap = 'G';						// char형 변수 선언과 초기화

	if ((cap >= 'A') && (cap <= 'Z'))			// 대문자 범위라면
	{
		small = cap + ('a' - 65);				// 대/소문자의 차이를 더해 소문자로 변환 ('A' = 65)
	}
	printf("대문자 : %c %c", cap, '\n');		// '\n'를 %c로 출력하면 줄이 바뀐다
	printf("소문자 : %c", small);

	return 0;
}