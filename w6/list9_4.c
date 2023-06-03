#include <stdio.h>

int main(void)
{
    int hairetu[] = {1, 2, 3, 4, 5, 6};
    int *pt;

    pt = hairetu;
    printf("インクリメント前のポインタの値は%dです\n", pt);
    pt++;
    printf("インクリメント後のポインタの値は%dです\n", pt);

    return 0;
}
