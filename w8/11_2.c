#include <stdio.h>

struct SEISEKI_DATA
{
    char namae[10];
    double daritu;
    int honruida;
};

int main(void)
{
    struct SEISEKI_DATA seiseki = {"OTANI", 0.333, 16};

    printf("名前は%sです\n", seiseki.namae);
    printf("打率は%.31fです\n", seiseki.daritu);
    printf("本塁打は%dです\n", seiseki.honruida);

    return 0;
}
