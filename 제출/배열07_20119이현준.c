#include "stdio.h"
int main(){
    int i,j,s;
    int score[][5]={
        {83,90,88},
        {84,85,90},
        {81,82,84},
        {86,86,92},
        {75,83,93}
    };
    printf("========================\n");
    printf("  kor  eng  mat  total\n");
    printf("------------------------\n");
    for(i=0; i<5; i++){
        s=0;
        for(j=0; j<3; j++){
            s+=score[i][j];
            printf("  %d ", score[i][j]);
        }
        printf("   %d", s);
        printf("\n");
        printf("------------------------\n");
    }
}