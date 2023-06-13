#include <stdio.h>

char *kKakunoBasyo(char *, char);

int main(void)
{
    char hairetu[] = "star";
    char *basyoP;
    char mozi;

    mozi = 'a';

    basyoP = kKakunoBasyo(hairetu, mozi);
    if(basyoP != NULL)
    {
        printf("検索した文字以降の文字列は%sです\n", basyoP);
    }

    return 0;
}

char *kKakunoBasyo(char *hairetuP, char mozi)
{
    int i;

    for(i = 0; *(hairetuP + i) != '\0'; i++)
    {
        if(*(hairetuP + i) == mozi)
        {
            return hairetuP + i;
        }
    }
    return 0;
}

