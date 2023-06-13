#include <stdio.h>

void kSettei(int *sutiP);

int main(void)
{
    int suti;

    kSettei(&suti);
    printf("%d\n", suti);

    return 0;
}

void kSettei(int *sutiP)
{
    *sutiP = 500;
}
