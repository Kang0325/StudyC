#include <stdio.h>

void func() // 입력과 출력이 없는 함수
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("res : %d", res);

}

int main()
{
	func(); // func 함수 호출
	return 0;
}