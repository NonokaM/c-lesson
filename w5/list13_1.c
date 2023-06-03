#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char mozi;

    printf("文字の入力>> ");
    scanf("%c", &mozi);

    if(isalpha(mozi))
    {
        printf("アルファベットです\n");
    }
    else
    {
        printf("アルファベットではありません\n");
    }

    return 0;
}
