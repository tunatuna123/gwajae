#include <stdio.h>
#include <stdlib.h>

int p(int a,int b);

int main(){
    int k,t;
    scanf("%d %d", &k,&t);
    printf("%d",abs(p(k,t)));
}

int p(int a,int b){
    return a-b;
}