#include <stdio.h>

int main(void)
{
    FILE *fp;
    char buff[128];
    char mozi[16];
    int seisu;
    double zissu;

    fp = fopen("test.txt", "r");
    if (fp != NULL)
    {
        while(fgets(buff, 128, fp) != NULL)
        {
            sscanf(buff, "%s %d %lf", mozi, &seisu, &zissu);
            printf("mozi = %s seisu = %d zissu = %lf\n", mozi, seisu, zissu);
        }
        fclose(fp);
    }
    else
    {
        printf("ファイルオープンに失敗しました。\n");
    }

    return 0;
}
