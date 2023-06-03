#include <stdio.h>
#include <math.h>

int main(void)
{
    double suti, heiho;

    printf("数値の入力>> ");
    scanf("%lf", &suti);

    heiho = sqrt(suti);

    printf("%lfの平方根は%lfです\n", suti, heiho);

    return 0;
}
