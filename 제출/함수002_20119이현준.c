#include <stdio.h>

int fac(int k);

int main(){
    int a=5;
    int re;
    re = fac(a);
    printf("%d", re);
    return 0;
}

int fac(int k){
    if(k==1)
        return 1;
    else
        return k*fac(k-1);
}