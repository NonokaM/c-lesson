#include<stdio.h>  // printf(), fflush()
#include<string.h> // strlen()
#include<unistd.h> // usleep()

int main(){
    int c, n, N;
    char msg[20]="Hello World !! ";
    N = strlen(msg);
    while(1){
        c = msg[0];
        for( n=0; n < N -1; n++){
            msg[n] = msg[n+1];
        }
        msg[N-1] = c;
        printf("\r%s",msg); // カーソルを行頭に戻してから，msgを出力
        fflush(stdout);     // 出力ストリームを強制的に吐き出す
        usleep(1000*100);   // 100ミリ秒スリープ
    }
    return 0;
}
