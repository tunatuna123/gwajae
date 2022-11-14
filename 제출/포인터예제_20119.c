#include <stdio.h> 

int strlen2(char *ptr);

int main(){
    int cnt;
    char str[100];
    printf("문자열을 입력하세요: ");
    gets(str);
    cnt = strlen2(str);
    printf("문자열의 길이: %d\n", cnt);
return 0;
}

int strlen2(char *ptr){
    int i;
    for(i = 0; i < 100; i++)
        if(*(ptr + i) == NULL)
            break;
    return i;
}