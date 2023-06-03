#include <stdio.h>

int main(void)
{
    int hairetu[5] ={50, 10, 30, 40, 20};
    int *pt;
    int i;

    pt = hairetu;

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *(pt+i));
    }

    return 0;
}
