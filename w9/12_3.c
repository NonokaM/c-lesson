#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char mozi[6];

    fp = fopen("test.txt", "r");
    if (fp != NULL)
    {
        fscanf(fp, "%s", mozi);
        fclose(fp);
        printf("%s\n", mozi);
    }
    else
    {
        printf("ファイルオープンに失敗しました。\n");
    }

    return 0;
}
