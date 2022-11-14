#include <stdio.h>

int pp(int n);

int main(){
    int num;
    scanf("%d", &num);
    printf("%2d", pp(num));
    return 0;
}

int pp(int a){
    int count = a%10;
    if (a<=1)
    {
        return count;
    }
    return count+pp(a/10);
}