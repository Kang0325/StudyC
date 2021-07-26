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

void total_number(int count);	                    // 전체 등록 회원 수 반환
double average_weight(Fitness** pary, int count);	// 평균 체중 반환
int max_weight(Fitness** pary, int count);	        // 최대 체중 회원의 index 반환
void print_info(Fitness** pary, int index);		    // 회원 정보 출력
void free_ary(Fitness** pary, int count);	        // 동적 할당 영역 해제

int main()
{
    int i = 0;
    int count = 0;                         // 총 회원 수
    int tnum;                              // 회원 번호
    char tname[80];                        // 회원 이름
    double tweight;                        // 회원 체중
    double avg;                            // 전체 회원의 평균 체중
    int index;                             // 회원 정보가 담긴 배열의 인덱스

    Fitness* ary[100];                     // 포인터 배열 선언

    printf("회원 등록 시작 !! (모두 등록 후 음수 입력)\n");
    printf("-------------------------------------------\n");
    while (1)
    {
        printf("회원 번호 : ");
        scanf("%d", &tnum);
        if (count <= 0)                 // 첫번째 입력
        {
            if (tnum <= 0) return 0;    // 번호 0 or 음수일 때 프로그램 종료
        }
        else                            // 두번째 입력부터 
        {
            if (tnum <= 0) break;       // 번호 0 or 음수일 때 반복문 종료
            for (i = 0; i < count; i++) // 회원 번호 중복 방지
            {
                if (tnum == ary[i]->num)
                {
                    printf("\n* * 중복된 회원 번호가 있습니다 * *\n\n");
                    printf("회원 번호(모두 등록 후 음수 입력) : ");
                    scanf("%d", &tnum);
                    break;
                }
            }
        }
        getchar();

        printf("이름 입력 : ");
        scanf("%s", tname);

        printf("체중 입력 (1~200kg) : ");
        scanf("%lf", &tweight);
        while ((tweight <= 0) || (tweight > 200))
        {
            printf("몸무게는 1~200사이 숫자 입력 가능합니다.\n");
            printf("체중 입력 (1~200kg) : ");
            scanf("%lf", &tweight);
        }

        // 동적 할당
        ary[count] = (int*)malloc(sizeof(tnum) + (strlen(tname) + 1) + sizeof(tweight));

        ary[count]->num = tnum;             // 회원번호 값
        strcpy(ary[count]->name, tname);    // 이름 값
        ary[count]->weight = tweight;       // 체중 값 

        count++;
        
        printf("-------------------------------------------\n");
    }

    total_number(count);                // 총 회원수 출력
    avg = average_weight(ary, count);   // 평균 체중 출력
    index = max_weight(ary, count);     // 최고 체중의 인덱스
    print_info(ary, index);             // 최고 체중을 가진 회원 출력
    free_ary(ary, count);               // 동적 할당 해제

    return 0;
}

void total_number(int count)
{
    printf("-------------------------------------------\n");
    printf("- 총 회원 수 : %d 명\n", count);
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

    printf("- 평균 체중 : %.2lf kg\n", avg);

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
    printf("\n- 체중이 가장 무거운 회원은?\n");
    printf("* 회원 번호 : %d\n", pary[index]->num);
    printf("* 이름 : %s\n", pary[index]->name);
    printf("* 체중 : %.2lf kg\n", pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{
    int i;

    for (i = 0; i < count; i++) { free(pary[i]); }
}