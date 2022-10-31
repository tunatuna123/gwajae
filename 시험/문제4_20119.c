#include <stdio.h>

int main(){
    int d[5] = {1,0,0,1};
    int ans = 0;

    for (int i = 0; i < 4; i++)
    {
        if (d[i] == 1)
        {
            ans ++;
        }
    }

    if (ans % 2 == 0)
    {
        d[4] = 1;
    }

    for (int i = 0; i < sizeof(d)/sizeof(int); i++)
        {
            printf("%d", d[i]);
        }
}