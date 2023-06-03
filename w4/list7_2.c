#include <stdio.h>

int main(void)
{
    int hairetu[5];
    int i;

    hairetu[0] = 50;
    hairetu[1] = 10;
    hairetu[2] = 30;
    hairetu[3] = 40;
    hairetu[4] = 20;

    for(i = 0; i < 5; i++)
    {
        printf("要素%dは%dです\n", i, hairetu[i]);
    }

    return 0;
}
