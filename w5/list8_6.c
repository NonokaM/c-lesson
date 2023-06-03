#include <stdio.h>

int main(void)
{
    char hairetu[10] = "TOKYO";
    int i;

    printf("文字列は");

    for(i = 0; hairetu[i] != '\0'; i++)
    {
        printf("%c", hairetu[i]);
    }
    printf("です\n");

    return 0;
}
