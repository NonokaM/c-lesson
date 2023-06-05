#include <stdio.h>

struct SEISEKI_DATA
{
    char namae [10];
    double daritu;
    int honruida;
};

int main (void)
{
    struct SEISEKI_DATA seiseki;

    printf("名前の入力>>");
    scanf("%s", seiseki.namae);
    printf("打率の入力>>");
    scanf("%.31f", &seiseki.daritu);
    printf("本塁打の入力>>");
    scanf("%d", &seiseki.honruida);

    return 0;
}
