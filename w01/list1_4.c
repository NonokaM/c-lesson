#include <stdio.h>

int main(void)
{
    int teihen, takasa, menseki;

    printf("高さの入力 >> ");
    scanf("%d", &takasa);
    printf("底辺の入力 >> ");
    scanf("%d", &teihen);

    menseki = takasa * teihen / 2;

    printf("三角形の面積は%d です\n", menseki);

    return 0;
}
