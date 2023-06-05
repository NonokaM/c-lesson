#include <stdio.h>

int main(void)
{
    char mozi1;
    char mozi2;

    printf("１文字の入力>>");
    scanf("%c", &mozi1);

    printf("１文字の入力>>");
    scanf("%c", &mozi2);

    printf("入力された値は%cと%cです\n", mozi1, mozi2);

    return 0;
}
