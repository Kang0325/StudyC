#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int num;
	char name[20];
	double weight;
} Fitness;

void total_number(int count);	                    // ��ü ��� ȸ�� �� ��ȯ
double average_weight(Fitness** pary, int count);	// ��� ü�� ��ȯ
int max_weight(Fitness** pary, int count);	        // �ִ� ü�� ȸ���� index ��ȯ
void print_info(Fitness** pary, int index);		    // ȸ�� ���� ���
void free_ary(Fitness** pary, int count);	        // ���� �Ҵ� ���� ����

int main()
{
    int i = 0;
    int count = 0;                         // �� ȸ�� ��
    int tnum;                              // ȸ�� ��ȣ
    char tname[80];                        // ȸ�� �̸�
    double tweight;                        // ȸ�� ü��
    double avg;                            // ��ü ȸ���� ��� ü��
    int index;                             // ȸ�� ������ ��� �迭�� �ε���

    Fitness* ary[100];                     // ������ �迭 ����

    printf("ȸ�� ��� ���� !! (��� ��� �� ���� �Է�)\n");
    printf("-------------------------------------------\n");
    while (1)
    {
        printf("ȸ�� ��ȣ : ");
        scanf("%d", &tnum);
        if (count <= 0)                 // ù��° �Է�
        {
            if (tnum <= 0) return 0;    // ��ȣ 0 or ������ �� ���α׷� ����
        }
        else                            // �ι�° �Էº��� 
        {
            if (tnum <= 0) break;       // ��ȣ 0 or ������ �� �ݺ��� ����
            for (i = 0; i < count; i++) // ȸ�� ��ȣ �ߺ� ����
            {
                if (tnum == ary[i]->num)
                {
                    printf("\n* * �ߺ��� ȸ�� ��ȣ�� �ֽ��ϴ� * *\n\n");
                    printf("ȸ�� ��ȣ(��� ��� �� ���� �Է�) : ");
                    scanf("%d", &tnum);
                    break;
                }
            }
        }
        getchar();

        printf("�̸� �Է� : ");
        scanf("%s", tname);

        printf("ü�� �Է� (1~200kg) : ");
        scanf("%lf", &tweight);
        while ((tweight <= 0) || (tweight > 200))
        {
            printf("�����Դ� 1~200���� ���� �Է� �����մϴ�.\n");
            printf("ü�� �Է� (1~200kg) : ");
            scanf("%lf", &tweight);
        }

        // ���� �Ҵ�
        ary[count] = (int*)malloc(sizeof(tnum) + (strlen(tname) + 1) + sizeof(tweight));

        ary[count]->num = tnum;             // ȸ����ȣ ��
        strcpy(ary[count]->name, tname);    // �̸� ��
        ary[count]->weight = tweight;       // ü�� �� 

        count++;
        
        printf("-------------------------------------------\n");
    }

    total_number(count);                // �� ȸ���� ���
    avg = average_weight(ary, count);   // ��� ü�� ���
    index = max_weight(ary, count);     // �ְ� ü���� �ε���
    print_info(ary, index);             // �ְ� ü���� ���� ȸ�� ���
    free_ary(ary, count);               // ���� �Ҵ� ����

    return 0;
}

void total_number(int count)
{
    printf("-------------------------------------------\n");
    printf("- �� ȸ�� �� : %d ��\n", count);
}

double average_weight(Fitness** pary, int count)
{
    int i;
    double res;
    double avg;

    res = 0;

    for (i = 0; i < count; i++)
    {
        res += pary[i]->weight;
    }

    avg = res / (double)count;

    printf("- ��� ü�� : %.2lf kg\n", avg);

    return avg;
}

int max_weight(Fitness** pary, int count)
{
    int i;
    int maxindex = 0;

    for (i = 1; i < count; i++)
    {
        if (pary[maxindex]->weight < pary[i]->weight)
        {
            maxindex = i;
        }
    }

    return maxindex;
}

void print_info(Fitness** pary, int index)
{
    printf("\n- ü���� ���� ���ſ� ȸ����?\n");
    printf("* ȸ�� ��ȣ : %d\n", pary[index]->num);
    printf("* �̸� : %s\n", pary[index]->name);
    printf("* ü�� : %.2lf kg\n", pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{
    int i;

    for (i = 0; i < count; i++) { free(pary[i]); }
}