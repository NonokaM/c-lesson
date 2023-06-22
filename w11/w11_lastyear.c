
/* * * * * * * * * * * * * * * *

 関数作成練習（2022年の演習問題より）

(1) 割られる数 m と 割る数 n を与えると，
    商 q と 剰余 r を計算する関数 div()
    を完成させよ．

    関数 div() の戻り値は 0で除算しよう
    とした場合は 0 ，それ以外の場合は 1
    とすること．

(2) プログラムが正しく動作するように
   リスト中の □ を埋めなさい．

 * * * * * * * * * * * * * * * */

#include<stdio.h>

int div(int m, int n, int *q, int *r){
    if(n == 0) return 0;
    *q = m / n;
    *r = m % n;
    return 1;
}

int main(){
    int a, b, c, d;

    while( scanf("%d %d", &a, &b) != EOF ){
        if( div(a, b, &c, &d) ){
            printf("\t%d / %d = %d ... %d\n", a, b, c, d);
        }
        else{
            printf("\t\e[31m0では割れません\e[m\n");
        }
    }
    printf("...bye\n");
    return 0;
}
