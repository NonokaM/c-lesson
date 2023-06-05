#include <stdio.h>

int main(void)
{
    char mozi;

    printf("1文字の入力>>");
    scanf("%c", &mozi);

    switch (mozi)
    {
        case 'x':
            printf("入力された文字は小文字のxです\n");
            break;
        case 'X':
            printf("入力された文字は大文大のXです\n");
            break;
        default:
            printf("入力された文字は小文字のxでも大文字のXでもありません\n");
            break;
    }

    return 0;
}
