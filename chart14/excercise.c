#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("예제 14-excercise\n");
	printf("\n");

	int i;
	int length;
	char ch[100];

	printf("문자열을 입력하세요 : ");
	scanf("%s", ch);

	length = strlen(ch);

	for (i = 0; i < length/2; i++)
	{
		if (ch[i] != ch[length - i - 1])
		{
			printf("회문이 아닙니다.\n");
			break;
		}
		printf("회문입니다.");
	}
	
	return 0;
}
