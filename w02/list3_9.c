#include <stiusd.h>

int main(void)
{
    int seisu = 1234;
    double zissu = 654.321;

    printf("d   :%d:\n", seisu);
    printf("2d  :%2d:\n", seisu);
    printf("8d  :%8d:\n", seisu);
    printf("-8d :%-8d:\n", seisu);

    printf("f       :%f:\n", zissu);
    printf("12f     :%12f:\n", zissu);
    printf("9.2f    :%9.2f:\n", zissu);
    printf("9.f     :%9.f:\n", zissu);
    printf(".2f     :%.2f:\n", zissu);

    return 0;
}
