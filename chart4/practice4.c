#include <stdio.h>

int main(void)
{
	// 4-1
	printf("예제 4-1\n");
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수 연산 : %d\n", inv);
	printf("\n");

	// 4-2
	printf("예제 4-2\n");
	double apple;	// 실수
	int banana;		// 정수
	int orange;		// 정수

	apple = 5.0 / 2.0;	// 실수, 실수 나누기 (실수는 나머지 연산 불가)
	banana = 5 / 2;		// 정수, 정수 나누기
	orange = 5 % 2;		// 정수, 정수 나머지

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);
	printf("\n");

	// 4-3
	printf("예제 4-3\n");
	int a1 = 10, b1 = 20;
	int c1 = 10, d1 = 20;

	++a1;
	--b1;
	c1++;
	d1--;
	printf("%d\t%d\n", a1, b1);
	printf("%d\t%d\n", c1, d1);
	printf("\n");

	// 4-4
	printf("예제 4-4\n");
	int a2 = 5, b2 = 5;
	int pre, post;

	pre = (++a2) * 3;	// 전위형
	post = (b2++) * 3;	// 후위형

	printf("초깃값 a2 = %d, b2 = %d\n", a2, b2);
	printf("전위형 : (++a2) * 3 = %d, 후위형 : (b2++) * 3 = %d\n", pre, post);
	printf("\n");

	// 4-5
	printf("예제 4-5\n");
	int a3 = 10, b3 = 20, c3 = 10;
	int res;

	res = (a3 > b3);
	printf("a3 > b3 : %d\n", res);
	res = (a3 >= b3);
	printf("a3 >= b3 : %d\n", res);
	res = (a3 < b3);
	printf("a3 < b3 : %d\n", res);
	res = (a3 <= b3);
	printf("a3 <= b3 : %d\n", res);
	res = (a3 <= c3);
	printf("a3 <= c3 : %d\n", res);
	res = (a3 == b3);
	printf("a3 == b3 : %d\n", res);
	res = (a3 != c3);
	printf("a3 != c3 : %d\n", res);
	printf("\n");

	// 4-6
	printf("예제 4-6\n");
	int a4 = 30;
	int res1;

	res1 = (a4 > 10) && (a4 < 20);
	printf("(a4 > 10) && (a4 < 20) : %d\n", res1);
	res1 = (a4 < 10) || (a4 > 20);
	printf("(a4 < 10) || (a4 > 20) : %d\n", res1);
	res1 = !(a4 >= 30);
	printf("!(a4 >= 30) : %d\n", res1);
	printf("\n");

	// 4-7
	printf("예제 4-7\n");
	int a5 = 10, b5 = 20, res2;
	
	a5 + b5;									// 연산 결과 버려짐
	printf("%d + %d = %d\n", a5, b5, a5 + b5);	// 연산 결과 바로 출력에 사용

	res2 = a5 + b5;								// 연산 결과 변수에 저장
	printf("%d + %d = %d\n", a5, b5, res2);		// 저장된 값 사용
	printf("\n");

	// 4-8
	printf("예제 4-8\n");
	int x = 20, y = 3;
	double res3;

	res3 = ((double)x / (double)y);
	printf("x = %d, y = %d\n", x, y);
	printf("x / y의 결과 : %.1lf\n", res3);

	x = (int)res3;
	printf("(int) %.1lf의 결과 : %d\n", res3, x);
	printf("\n");

	// 4-9
	printf("예제 4-9 sizeof 연산자\n");
	int o = 10;
	double p = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(o));
	printf("double형 변수의 크기 : %d\n", sizeof(p));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결과값의 크기 : %d\n", sizeof(1.5+3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));
	printf("\n");

	// 4-10
	printf("예제 4-10 복합대입 연산자\n");
	int x1 = 10, y1 = 20;
	int res4 = 2;

	x1 += 20;
	res4 *= b + 10;

	printf("x1 = %d, y1 = %d\n", x1, y1);
	printf("res4 = %d\n", res4);
	printf("\n");

	// 4-11
	printf("예제 4-11 콤마 연산자\n");
	int x2 = 10, y2 = 20;
	int res5;
	res5 = (++x2, ++y2);

	printf("x2:%d, y2:%d\n", x2, y2);
	printf("res5:%d\n", res5);
	printf("\n");

	// 4-12
	printf("예제 4-12 조건 연산자\n");
	int x3 = 10, y3 = 20, res6;

	res6 = (x3 > y3) ? x3 : y3;			// x3와 y3 중 큰 값 res6에 저장, 괄호 안이 맞으면 앞의 값 틀리면 뒤의 값
	printf("큰 값 : %d\n", res6);
	printf("\n");

	// 4-13
	printf("예제 4-13 비트 연산자\n");
	int x4 = 10, y4 = 12;

	printf("x4 & y4 = %d\n", x4 & y4);		// 두 비트가 모두 1인 경우만 1
	printf("x4 ^ y4 = %d\n", x4 ^ y4);		// 두 비트가 서로 다른 경우만 1
	printf("x4 | y4 = %d\n", x4 | y4);		// 두 비트 중 하나라도 1인 경우 1
	printf("~x4 = %d\n", ~x4);				// 비트 0은 1로, 1은 0으로
	printf("x4 << 1 : %d\n", x4 << 1);		// 비트를 왼쪽으로 한칸씩 이동
	printf("x4 << 2 : %d\n", x4 >> 2);		// 비트를 오른쪽으로 두칸씩 이동

	char ch = 128;							// 0b 1000 0000
	unsigned char ch1 = 128;
	printf("ch >> 1 : %d\n", ch >> 1);		// 0b 1100 0000
	printf("ch1 >> 1 : %d\n", ch >> 1);
	printf("\n");

	// 4-14
	printf("예제 4-14 연산자 우선순위와 연산 방향\n");
	int x5 = 10, y5 = 5;
	int res7;

	res7 = x5 / y5 * 2;
	printf("res7 = %d\n", res7);
	res7 = ++x5 * 3;
	printf("res7 = %d\n", res7);
	res7 = x5 > y5 && x5 != 5;
	printf("res7 = %d\n", res7);
	res7 = x5 %3 == 0;
	printf("res7 = %d\n", res7);
	printf("\n");

	return 0;
}