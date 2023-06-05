#include <stdio.h>
#include <string.h>

struct SEISEKI_DATA
{
    char namae[10];
    double daritu;
    int honrudia;
};

int main(void)
{
    struct SEISEKI_DATA seiseki;

    strcpy(seiseki.namae, "OTANI");
    seiseki.daritu = 0.333;
    seiseki.honrudia = 16;

    printf("名前は%sです\n", seiseki.namae);
    printf("打率は%.31fです\n", seiseki.daritu);
    printf("本塁打は%dです\n", seiseki.honrudia);

    return 0;
}
