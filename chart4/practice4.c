#include <stdio.h>

int main(void)
{
	// 4-1
	printf("���� 4-1\n");
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a�� �� : %d, b�� �� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� ���� ���� : %d\n", inv);
	printf("\n");

	// 4-2
	printf("���� 4-2\n");
	double apple;	// �Ǽ�
	int banana;		// ����
	int orange;		// ����

	apple = 5.0 / 2.0;	// �Ǽ�, �Ǽ� ������ (�Ǽ��� ������ ���� �Ұ�)
	banana = 5 / 2;		// ����, ���� ������
	orange = 5 % 2;		// ����, ���� ������

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);
	printf("\n");

	// 4-3
	printf("���� 4-3\n");
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
	printf("���� 4-4\n");
	int a2 = 5, b2 = 5;
	int pre, post;

	pre = (++a2) * 3;	// ������
	post = (b2++) * 3;	// ������

	printf("�ʱ갪 a2 = %d, b2 = %d\n", a2, b2);
	printf("������ : (++a2) * 3 = %d, ������ : (b2++) * 3 = %d\n", pre, post);
	printf("\n");

	// 4-5
	printf("���� 4-5\n");
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
	printf("���� 4-6\n");
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
	printf("���� 4-7\n");
	int a5 = 10, b5 = 20, res2;
	
	a5 + b5;									// ���� ��� ������
	printf("%d + %d = %d\n", a5, b5, a5 + b5);	// ���� ��� �ٷ� ��¿� ���

	res2 = a5 + b5;								// ���� ��� ������ ����
	printf("%d + %d = %d\n", a5, b5, res2);		// ����� �� ���
	printf("\n");

	// 4-8
	printf("���� 4-8\n");
	int x = 20, y = 3;
	double res3;

	res3 = ((double)x / (double)y);
	printf("x = %d, y = %d\n", x, y);
	printf("x / y�� ��� : %.1lf\n", res3);

	x = (int)res3;
	printf("(int) %.1lf�� ��� : %d\n", res3, x);
	printf("\n");

	// 4-9
	printf("���� 4-9 sizeof ������\n");
	int o = 10;
	double p = 3.4;

	printf("int�� ������ ũ�� : %d\n", sizeof(o));
	printf("double�� ������ ũ�� : %d\n", sizeof(p));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ ������� ũ�� : %d\n", sizeof(1.5+3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
	printf("\n");

	// 4-10
	printf("���� 4-10 ���մ��� ������\n");
	int x1 = 10, y1 = 20;
	int res4 = 2;

	x1 += 20;
	res4 *= b + 10;

	printf("x1 = %d, y1 = %d\n", x1, y1);
	printf("res4 = %d\n", res4);
	printf("\n");

	// 4-11
	printf("���� 4-11 �޸� ������\n");
	int x2 = 10, y2 = 20;
	int res5;
	res5 = (++x2, ++y2);

	printf("x2:%d, y2:%d\n", x2, y2);
	printf("res5:%d\n", res5);
	printf("\n");

	// 4-12
	printf("���� 4-12 ���� ������\n");
	int x3 = 10, y3 = 20, res6;

	res6 = (x3 > y3) ? x3 : y3;			// x3�� y3 �� ū �� res6�� ����, ��ȣ ���� ������ ���� �� Ʋ���� ���� ��
	printf("ū �� : %d\n", res6);
	printf("\n");

	// 4-13
	printf("���� 4-13 ��Ʈ ������\n");
	int x4 = 10, y4 = 12;

	printf("x4 & y4 = %d\n", x4 & y4);		// �� ��Ʈ�� ��� 1�� ��츸 1
	printf("x4 ^ y4 = %d\n", x4 ^ y4);		// �� ��Ʈ�� ���� �ٸ� ��츸 1
	printf("x4 | y4 = %d\n", x4 | y4);		// �� ��Ʈ �� �ϳ��� 1�� ��� 1
	printf("~x4 = %d\n", ~x4);				// ��Ʈ 0�� 1��, 1�� 0����
	printf("x4 << 1 : %d\n", x4 << 1);		// ��Ʈ�� �������� ��ĭ�� �̵�
	printf("x4 << 2 : %d\n", x4 >> 2);		// ��Ʈ�� ���������� ��ĭ�� �̵�

	char ch = 128;							// 0b 1000 0000
	unsigned char ch1 = 128;
	printf("ch >> 1 : %d\n", ch >> 1);		// 0b 1100 0000
	printf("ch1 >> 1 : %d\n", ch >> 1);
	printf("\n");

	// 4-14
	printf("���� 4-14 ������ �켱������ ���� ����\n");
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