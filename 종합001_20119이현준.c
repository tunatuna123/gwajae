#include <stdio.h>

int main()
    {
    int k, sum = 0;
    /*
    for (k = 1; k <= 1000; k++)
    {
    if (k % 3 == 0)
    sum += k;
    }
    */
    int i = 1000;
    while (i>=1)
    {
        if (i%3 == 0)
        {
            sum += i;
        }
        i--;
    }
    
    printf("합은 = %d", sum);
}