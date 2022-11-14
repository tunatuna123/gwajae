#include <stdio.h>
int main(){
    char c[][10]={"school", "subject", "program", "study"};
    int a;
    for(int i=0;i<4;i++){
        printf("%s \n", c[i]);
    }
    return 0;
}