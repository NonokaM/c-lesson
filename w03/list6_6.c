#include <stdio.h>

int main(void)
{
    int suti;

    suti = 2;

    switch (suti)
    {
        case 1:
            printf("sutiの値は1です\n");
            break;
        case 2:
            printf("sutiの値は2です\n");
        case 3:
            printf("sutiの値は3です\n");
            break;
    }

    return 0;
}
