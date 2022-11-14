#include <stdio.h>

void f(int a, int b){
    if (a == b)
    {
        printf("-1");
    }
    else
    {
        printf("%d", a<b ? a:b);
    }
}
int main(){
    int k,t;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &k,&t);
    f(k,t);
}