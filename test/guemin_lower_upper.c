#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




void insertionSort(char a[], int size)
{
    int i, j, t;
    char temp;


    printf("\n������ ���� : ");
    for (t = 0; t < size; t++)
    {
        printf("%c ", a[t]);
    }
    printf("\n\n<<<<<<<<<���� ���� ����>>>>>>>>>>\n");
    for (i = 1; i < size; i++)
    {
        temp = a[i];
        j = i;
        while ((j > 0) && (a[j - 1] > temp))
        {
            a[j] = a[j - 1];
            j = j - 1;
        }
        a[j] = temp;
        printf("\n %d�ܰ� : ", i);
        for (t = 0; t < size; t++)
        {
            printf("%3c ", a[t]);
        }

    }
}


void main()
{
    char input_ary[10];
    char a;
    int i = 0;
    int j = 0;
    int k = 0;
    char lower_ary[10];
    char upper_ary[10];

    while (1)
    {
        printf("���ĺ��� �Է��Ͻÿ� : ");
        scanf(" %c", &a);
        if (a < 64 || a>123)
        {
            printf("�߸��� ���� �����̽��ϴ�. �ٽ� �Է����ּ���");
        }
        else
        {
            input_ary[i] = a;
            i++;
            if (i == 10)
            {
                break;
            }
        }
    }
    insertionSort(input_ary, i);

    for (size_t i = 0; i < 10; i++)
    {
        if (input_ary[i] > 64 && input_ary[i] < 91)
        {
            lower_ary[j] = input_ary[i];
            j++;
        }
        else
        {
            upper_ary[k] = input_ary[i];
            k++;
        }
    }
    printf("\nlower_ary�� ����ִ� ���ڴ�");

    for (size_t i = 0; i < j; i++)
    {
        printf(" %c", lower_ary[i]);
    }
    printf("\nupper_ary�� ����ִ� ���ڴ�");

    for (size_t i = 0; i < k; i++)
    {
        printf(" %c", upper_ary[i]);
    }

}

