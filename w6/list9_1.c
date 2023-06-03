#include <stdio.h>

int main(void)
{
    int suti;
    int *pt;

    pt = &suti;
    *pt = 100;

    printf("sutiの値は%dです\n", suti);

    return 0;
}
