#include <stdio.h>

int main(void)
{
    int suti1;
    int suti2;
    int *pt;

    suti1 = 10;
    suti2 = 20;

    pt = &suti1;
    *pt = 30;
    pt = &suti2;
    *pt = 40;

    printf("suti1は%dです。suti2は%dです\n", suti1, suti2);

    return 0;
}
