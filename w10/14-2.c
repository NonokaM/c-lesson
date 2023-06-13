#include <stdio.h>

void kSettei(int *, int *);

int main(void)
{
    int suti1;
    int suti2;

    kSettei(&suti1, &suti2 );
    printf("suti1は%d、suti2は%dです\n", suti1, suti2);

    return 0;
}

void kSettei(int *suti1P, int *suti2P)
{
    *suti1P = 100;
    *suti2P = 200;
}
