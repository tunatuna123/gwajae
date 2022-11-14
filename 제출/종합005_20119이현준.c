#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    int s,dis;
    printf("한 점의 좌표를 입력하세요");
    scanf("%d,%d", &x,&y);

    if (x==0 || y==0)
    {
        printf("ERROR");
    }
    if (x>0)
    {
        if (y>0)
        {
            s = 1;
        }
        if (y<0)
        {
            s =4;
        }
    }
    if (x<0)
    {
        if (y>0)
        {
            s = 2;
        }
        if (y<0)
        {
            s = 3;
        }
        
    }

    dis = sqrt(x*x+y*y);
    printf("사분면: %d\n", s);
    printf("원점에서부터의 거리: %d", dis);
}