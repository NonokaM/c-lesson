#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char moziretu[20];
    int suti;

    printf("文字列の入力>> ");
    scanf("%s", moziretu);

    suti = atoi(moziretu);

    printf("変換した数値は%dです\n", suti);

    return 0;
}
