#include <stdio.h>

int kBubunwa (int n);

int main(void)
{
    int n, kotae;

    printf("整数の入力＞＞");
    scanf("%d", &n);

    kotae = kBubunwa(n);

    printf("1 + 2 + ... + %dは%dです\n", n, kotae);

    return 0;
}

int kBubunwa(int n)
{
    int kotae;

    kotae = n * (n + 1)/2;

    return kotae;
}
