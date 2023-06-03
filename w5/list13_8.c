#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int ransu;
    time_t t;

    time(&t);
    srand(t);
    ransu = rand();

    printf("乱数は%dです\n", ransu);

    return 0;
}
