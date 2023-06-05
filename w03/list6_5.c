#include <stdio.h>

int main(void)
{
    int suti;

    printf("整数の入力>>");
    scanf("%d", &suti);

    switch (suti)
    {
        case 2:
            printf("10以下の素数である2です\n");
            break;
        case 3:
            printf("10以下の素数である3です\n");
            break;
        case 5:
            printf("10以下の素数である5です\n");
            break;
        case 7:
            printf("10以下の素数である7です\n");
            break;
        default:
            printf("10以下の素数ではありません\n");
            break;
    }

    return 0;
}
