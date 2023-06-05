#include <stdio.h>

struct SEISEKI_DATA
{
    char namae[10];
    double daritu;
    int honruida;
};

int main(void)
{
    struct SEISEKI_DATA seiseki1 = {"OTANI", 0.333, 16};
    struct SEISEKI_DATA seiseki2;

    seiseki2 = seiseki1;

    printf("seiseki2のnamaeは%sです\n", seiseki2.namae);
    printf("seiseki2のdarituは%.31fです\n", seiseki2.daritu);
    printf("seiseki2のhonruidaは%dです\n", seiseki2.honruida);

    return 0;
}
