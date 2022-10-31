#include <stdio.h>

int isPrime(int a){
    int i;
    for (int i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            return 0;
            break;
        }
        
    }
    return 1;
}

int main(){

    int n;
    scanf("%d", &n);
    if (isPrime(n))
    {
        printf("소수");
    }
    else
    {
        printf("합성수");
    }

    return 0;
}