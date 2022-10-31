#include <stdio.h>

int main(){
    int a[5] = {34, 19, 89, 23, 50};
    int m1, m2;
    m1 = a[0];
    m2 = a[0];

    for (int i = 1; i < 5; i++)
    {
        if (a[i] > m1)
        {
            m1 = a[i];
        }
    }

    for (int i = 1; i < 5; i++)
    {
        if (a[i] < m2)
        {
            m2 = a[i];
        }
    }

    printf("%d", m1-m2);
}