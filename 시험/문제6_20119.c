#include <stdio.h>

int ans = 1;

int f(int n){
    if (n <= 1)
    {
        return ans;
    }
    ans*=n;
    n--;
    f(n);

    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
}
