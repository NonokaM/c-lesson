#include <stdio.h>

int main(void)
{
    int ten[5];

    int i;
    int gokei;

    for(i = 0; i < 5; i++)
    {
        printf("%d番目の点数の入力 >> ", i);
        scanf("%d", &ten[i]);
    }

    gokei = 0;
    for(i = 0; i< 5; i++)
    {
        gokei = gokei + ten[i];
    }

    printf("合計は%dです\n", gokei);
    return 0;
}
