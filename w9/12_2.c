#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("test.txt", "w");
    if (fp != NULL)
    {
        fprintf(fp, "ABCDE\n");
        fclose(fp);
    }
    else
    {
        printf("ファイルオープンに失敗しました。\n");
    }

    return 0;
}
