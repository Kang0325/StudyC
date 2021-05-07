#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	5명의 사원아이디, 사원이름, 한달급여를 입력받아 출력한 뒤
	5명의 사원의 급여 총액과 평균 급여액을 구하시오.
	(이름은 동적할당에 저장한다.)
*/

typedef struct employee
{
	int id;			// 사원번호
	char* name;		// 사원이름
	int salary;		// 급여
}Employee;			// *Employee로 줄여 사용 가능*

int main()
{
	char str[20];
	int i;
	int sum = 0;
	double avg;
	Employee emp[5];

	for (i = 0; i < 5; i++)
	{
		
		printf("%d번 사원아이디, 사원이름, 한달급여(만원) 입력 : ",i+1);
		scanf("%d %s %d", &(emp[i].id), str, &(emp[i].salary));

		emp[i].name = (char*)malloc(strlen(str)+1);
		if (emp[i].name != NULL) strcpy(emp[i].name, str);
	}
	
	printf("-------------------------------------------------------\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d번 사원아이디 : %d, 사원이름 : %s, 한달급여 : %d만원\n",
			i+1, emp[i].id, emp[i].name, emp[i].salary);
	}

	printf("-------------------------------------------------------\n");

	for (i = 0; i < 5; i++)
	{
		sum += emp[i].salary;
	}
	avg = sum / 5.0;
	printf("다섯 사원의 총 급여 : %d만원, 평균 급여 : %.2lf만원\n", sum, avg);
	
	free(str);

	return 0;
}