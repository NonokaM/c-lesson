#include <stdio.h>

int main(void)
{
    char hairetu[10] = "Woold Cup";

    hairetu[2] = 'r';
    hairetu[5] = '\0';

    printf("文字列は%sです\n", hairetu);

    return 0;
}
