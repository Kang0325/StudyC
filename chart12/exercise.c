#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("���� 12-exercise ��, �빮�� ����\n");
	printf("\n");

	//97-122 a-z�ҹ���
	//65-90 A-Z�빮��

	char str;

	
	
	while (1)
	{
		printf("�ҹ��� �Է� : ");
		scanf(" %c", &str);

		if ((str >= 'a') && (str <= 'z'))
		{
			printf("�빮�� ���� ��� : %c\n", str - 32);
			break;
		}
		else
		{
			printf("-------------------------\n");
			printf("---  �ҹ��� ���Է� !  ---\n");
			printf("-------------------------\n");
		}
	}

	printf("\n");

	while (1)
	{
		printf("�빮�� �Է� : ");
		scanf(" %c", &str);

		if ((str >= 'A') && (str <= 'Z'))
		{
			printf("�ҹ��� ���� ��� : %c\n", str + 32);
			break;
		}
		else
		{
			printf("-------------------------\n");
			printf("---  �빮�� ���Է� !  ---\n");
			printf("-------------------------\n");
		}
	}
	

	return 0;
}
