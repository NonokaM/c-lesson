#include <stdio.h>

int main()
{
    int x, y, z;
    int sum;
    while(EOF != scanf(" %d %d %d", &x, &y, &z))
    {
        sum = x + y + z;
        printf("%3d\n", sum);
    }
    printf("...bye\n");
    return 0;
}
