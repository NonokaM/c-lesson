#include <stdio.h>
#include <unistd.h>
int main(void)
{
    FILE *fp;
    char buff[128];
    char mozi[16];
    int seisu;
    double zissu;

    sleep(5);
    fp = fopen("test.txt", "r");
    sleep(5);
    if (fp != NULL)
    {
        while(fgets(buff, 128, fp) != NULL)
        {
            sleep(5);
            sscanf(buff, "%s %d %lf", mozi, &seisu, &zissu);
            printf("mozi = %s seisu = %d zissu = %lf\n", mozi, seisu, zissu);
        }
        sleep(5);
        fclose(fp);
        sleep(5);
    }
    else
    {
        printf("ファイルオープンに失敗しました。\n");
    }

    return 0;
}
