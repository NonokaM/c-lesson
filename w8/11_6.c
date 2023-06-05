#include <stdio.h>
#include <string.h>

struct SEISEKI_DATA
{
    char namae[10];
    double daritu;
    int honruida;
};

int main(void)
{
    struct SEISEKI_DATA seiseki[3];
    int i;

    strcpy(seiseki[0].namae, "OTANI");
    seiseki[0].daritu = 0.333;
    seiseki[0].honruida = 16;

    strcpy(seiseki[1].namae, "HASE");
    seiseki[1].daritu = 0.285;
    seiseki[1].honruida = 34;

    strcpy(seiseki[2].namae, "SATO");
    seiseki[2].daritu = 0.177;
    seiseki[2].honruida = 25;

    for(i=0; i<3; i++)
    {
        printf("名前は%sです\n", seiseki[i].namae);
        printf("打率は%.31fです\n", seiseki[i].daritu);
        printf("本塁打は%dです\n", seiseki[i].honruida);
        printf("\n");
    }

    return 0;
}
