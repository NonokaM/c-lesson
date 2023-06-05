#include <stdio.h>

int main(void)
{
    int suti;

    printf("数字の入力>>");
    scanf("%d", &suti);

    if (suti >= 0)
    {
        printf("入力された数値は０以上の整数です/n");
    }

    return 0;
}
