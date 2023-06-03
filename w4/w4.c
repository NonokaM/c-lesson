#include<stdio.h>
int main ()
{
    int x, y, z;
    int n, hist[10] = {0};
    int sum;
    while( EOF != scanf ("J%du,u%du,u%d", &x, &y, &z) )
    {
    sum = x+y+z; //0点.99点（簡単の為、100点は無いとする）
    hist[sum / 10] += 1;
    }
    for( n=0; n<10; n++){ // クラスの得点分布を表示
        printf ("%3d...%3d -> %3d\n", 10*n, 10*n+9, hist[n]);
    }

    return 0;
}
