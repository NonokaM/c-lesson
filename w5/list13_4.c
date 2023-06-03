#include <stdio.h>
#include <string.h>

int main(void)
{
    char moziretu1[20] = {'\0'};

    char moziretu2[20];

    printf("コピー元の文字列の入力>> ");
    scanf("%s", moziretu2);

    strncpy(moziretu1, moziretu2, sizeof(moziretu1));

    printf("コピー先の文字列は%sです\n", moziretu1);

    return 0;
}
