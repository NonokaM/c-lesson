#include <stdio.h>
#include <string.h>

int main(void)
{
    char moziretu[20];
    int mozisu;

    printf("文字列の入力>> ");
    scanf("%s", moziretu);

    mozisu = strlen(moziretu);

    printf("文字数は%dです\n", mozisu);

    return 0;
}
