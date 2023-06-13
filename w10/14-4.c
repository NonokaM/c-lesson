#include <stdio.h>

struct SYOHAI_DATA
{
    int kati;
    int make;
    int hikiwake;
};
void kKakuno(struct SYOHAI_DATA *);
void kHyozi(struct SYOHAI_DATA *);

int main(void)
{
    struct SYOHAI_DATA syohai;

    kKakuno(&syohai);
    kHyozi(&syohai);

    return 0;
}

void kKakuno(struct SYOHAI_DATA *syohaiP)
{
    syohaiP->kati = 10;
    syohaiP->make = 3;
    syohaiP->hikiwake = 7;
}

void kHyozi(struct SYOHAI_DATA *syohaiP)
{
    printf("katiは%dです\n", syohaiP->kati);
    printf("makeは%dです\n", syohaiP->make);
    printf("hikiwakeは%dです\n", syohaiP->hikiwake);
}
