#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char mozi;
    char henkango;

    printf("文字の入力>> ");
    scanf("%c", &mozi);

    henkango = toupper(mozi);

    printf("変換後の文字は%cです\n", henkango);

    return 0;
}
