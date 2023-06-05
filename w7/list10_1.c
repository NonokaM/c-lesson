#include <stdio.h>

int bango = 0;
int kkaisu(void);

int main(void)
{
    int kekka;
    int i;

    for (i=0; i<5; i++)
    {
        kekka = kkaisu();
    }

    printf("kekkaは%dです\n", kekka);

    return 0;
}

int kkaisu(void)
{
    bango++;

    return bango;
}
