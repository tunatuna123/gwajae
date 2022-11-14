#include <stdio.h>
int main(void)
{
    int i,j,v=5;
    int a[10][10]={0};
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            if(i>=j)           
            {
                if(i==0 || j==0){
                    a[i][j]=1;
                }
                else if(j==i){
                    a[i][j]=1;
                    }
                else{
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                }
            }

    }
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(i>=j){
                    printf("%d ",a[i][j]);
                }
        }
            printf("\n");
    }

    return 0;
}
