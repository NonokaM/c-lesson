#include <stdio.h>

void kSettei(int *);

int main(void)
{
    int hairetu[5];
    int i;

    kSettei(hairetu);

    for(i = 0; i < 5; i++)
    {
        printf("hairetu[%d]は%dです\n", i, hairetu[i]);
    }

    return 0;
}

void kSettei(int *hairetuP)
{
    *(hairetuP + 0) = 100;
    *(hairetuP + 1) = 200;
    *(hairetuP + 2) = 300;
    *(hairetuP + 3) = 400;
    *(hairetuP + 4) = 500;
}
