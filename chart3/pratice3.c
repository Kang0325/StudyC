#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	// 3-1
	printf("����3-1\n");
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n", ch);

	printf("char ũ�� :%d\n", sizeof(char));
	printf("int ũ�� :%d\n", sizeof(int));
	printf("\n");
	
	// 3-2
	printf("����3-2\n");
	char ch1 = 'A';
	char ch2 = 65;

	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch2, ch2);
	printf("\n");

	// 3-3
	printf("����3-3\n");
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n", lln);
	printf("\n");

	// 3-4
	printf("����3-4\n");
	unsigned int z;

	z = 4294967295;
	printf("%d\n", z);
	z = -1;
	printf("%u\n", z);
	printf("\n");

	// 3-5
	printf("����3-5\n");
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float�� ������ �� : %.20f\n", ft);
	printf("double�� ������ �� : %.20lf\n", db);
	printf("\n");

	// 3-6
	printf("����3-6\n");
	char fruit[20] = "strawberry";

	printf("���� : %s\n", fruit);
	printf("����´ : %s %s\n", fruit, "jam");
	printf("\n");

	// 3-7
	printf("����3-7\n");
	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);
	printf("\n");

	//3-8
	printf("����3-8\n");
	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	
	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax);
	printf("\n");

	// 3-9
	printf("����3-9\n");
	int y;
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &y);
	printf("�Էµ� �� : %d\n", y);
	printf("\n");
	
	// 3-10
	printf("����3-10\n");
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);
	printf("\n");
	
	// 3-11
	printf("����3-11\n");
	char grade;
	char name[20];

	//while (getchar() != '\n');

	printf("���� �Է� : ");
	scanf(" %c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
	printf("\n");

	// 3-etc1
	printf("����3-etc1\n");
	char address[50];
	char name1[20];
	int age1;

	printf("�̸� �Է� : ");
	scanf("%s", name1);
	printf("���� �Է� : ");
	scanf("%d", &age1);
	printf("�ּ� �Է� : ");
	scanf("%s", address);
	printf("%s�� ���̴� %d�̰� �ּҴ� %s�Դϴ�.\n", name1, age1, address);
	printf("\n");
	
	// 3-etc2
	printf("����3-etc2\n");
	int a1;
	char b1;
	
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &a1);
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf(" %c", &b1);
	printf("�Էµ� ���� %d, %c �Դϴ�.\n", a1, b1);
	printf("\n");

	return 0;
}