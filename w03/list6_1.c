#include <stdio.h>

int main(void)
{
    int suti;

    printf("整数の入力>>");
    scanf("%d", &suti);

    if (suti >= 0)
    {
        printf("sutiは0以上の整数です/n");
    }
    else{
        printf("sutiは0未満の整数です/n");
    }

    return 0;
}
