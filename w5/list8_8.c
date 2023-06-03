#include <stdio.h>

int main(void)
{
    char hairetu[10];

    hairetu[0] = 'T';
    hairetu[1] = 'O';
    hairetu[2] = 'K';
    hairetu[3] = 'Y';
    hairetu[4] = 'O';
    hairetu[5] = '\0';

    printf("文字列は%sです\n", hairetu);

    return 0;
}
