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
    struct SEISEKI_DATA seiseki;
    struct SEISEKI_DATA *seisekip;

    seisekip = &seiseki;

    strcpy(seisekip->namae, "OTANI");
    seisekip->daritu = 0.333;
    seisekip->honruida = 16;

    printf("名前は%sです\n", seisekip->namae);
    printf("打率は%.31fです\n", seisekip->daritu);
    printf("本塁打は%dです\n", seisekip->honruida);

    return 0;
}
