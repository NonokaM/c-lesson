#include <stdio.h>

int mymac(double *x, double a, double b){
    if(x == NULL){
        return 1;
    }
    *x += a * b;
    return 0;
}

int main(){
    double x=0.0;
    int ret;
    ret = mymac(&x, 3, 2.5);
    printf("%d: %.2lf\n", ret, x);
    ret = mymac(&x, 2.5, 10.0);
    printf("%d: %.2lf\n", ret, x);
    ret = mymac(NULL, 1.25, 15.5);
    printf("%d: %.2lf\n", ret, x);
    return 0;
}
