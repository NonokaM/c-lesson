#include <stdio.h>

int main(void)
{
    FILE *fp;
    char mozi1[6] = "Earth";
    char mozi2[5] = "Mars";
    char mozi3[8] = "Mercury";

    fp = fopen("planet.txt", "w");

    if (fp != NULL)
    {
        fputs(mozi1, fp);
        fputs("\n", fp);
        fputs(mozi2, fp);
        fputs("\n", fp);
        fputs(mozi3, fp);
        fputs("\n", fp);
        fclose(fp);
    }
    else{
        printf("ファイルオープンに失敗しました。\n");
    }

    return 0;
}
