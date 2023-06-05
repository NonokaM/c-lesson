#include <stdio.h>
#define N 2

int main(void)
{
    int ten[N];
    double gokei = 0;
    double heikin;
    int i;

    for(i = 0; i < N; i++)
    {
        printf("%d番目の学生の点数入力>>", i + 1);
        scanf("%d", &ten[i]);
        gokei += ten[1];
    }

    heikin = gokei / N;
    printf("平均は%.1lfです\n", heikin);

    for(i = 0; i < N; i++)
    {
        printf("%d番目の学生の点数と%dと平均との差は%.1lfです\n", i + 1, ten[i], ten[i] - heikin);
    }

    return 0;
}
