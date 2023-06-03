#include <stdio.h>

int main(void)
{
    int hairetu[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("要素%dの入力 >> ", i);
        scanf("%d", &hairetu[i]);
    }

    for(i = 0; i< 5; i++)
    {
        printf("要素%dは%dです\n", i, hairetu[i]);
    }

    return 0;
}
