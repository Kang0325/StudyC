#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("예제 12-exercise 소, 대문자 변형\n");
	printf("\n");

	//97-122 a-z소문자
	//65-90 A-Z대문자

	char str;

	
	
	while (1)
	{
		printf("소문자 입력 : ");
		scanf(" %c", &str);

		if ((str >= 'a') && (str <= 'z'))
		{
			printf("대문자 문자 출력 : %c\n", str - 32);
			break;
		}
		else
		{
			printf("-------------------------\n");
			printf("---  소문자 미입력 !  ---\n");
			printf("-------------------------\n");
		}
	}

	printf("\n");

	while (1)
	{
		printf("대문자 입력 : ");
		scanf(" %c", &str);

		if ((str >= 'A') && (str <= 'Z'))
		{
			printf("소문자 문자 출력 : %c\n", str + 32);
			break;
		}
		else
		{
			printf("-------------------------\n");
			printf("---  대문자 미입력 !  ---\n");
			printf("-------------------------\n");
		}
	}
	

	return 0;
}
