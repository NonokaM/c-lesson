#include <stdio.h>

int main(void)
{
    char mozi;

    printf("文字の入力>>");
    scanf("%c", &mozi);

    if (mozi == 'x' || mozi == 'y' || mozi == 'z')
    {
        printf("入力された文字はxyzのどれですか\n");
    }

    return 0;
}
