#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("test.txt", "r");
    if (fp != NULL)
    {
        printf("ファイルオープンに成功しました。\n");
        fclose(fp);
    }
    else
    {
        printf("ファイルオープンに失敗しました。\n");
    }

    return 0;
}
