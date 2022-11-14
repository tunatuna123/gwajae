#include <stdio.h>

int p(int a,int b);

int main(){
    int k,t;
    scanf("%d %d", &k,&t);
    printf(p(k,t));
}

int p(int a,int b){
    return a+b;
}