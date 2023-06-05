#include <stdio.h>

int bango = 0;
int kKaisu(void);

int main(void)
{
    int kekka;
    int i;

    for(i = 0; i < 5; i++)
    {
        kekka = kKaisu();
    }

    printf("kekkaは%dです\n", kekka);

    return 0;
}

int kKaisu(void)
{
    bango++;

    return bango;
}
