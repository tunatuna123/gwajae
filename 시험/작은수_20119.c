#include <stdio.h>

int min(int a, int b){
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main(){
    int ans;
    int sc[10] = {18, 77, 68, 54, 99, 15, 56, 97, 64, 48};

    for (int i = 0; i < 10; i++)
    {
        ans = min(ans, sc[i]);
    }
    printf("%d\n", ans);

    return 0;
}