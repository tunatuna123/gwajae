#include <stdio.h>
#include <string.h>

int compute(char c, int a){
    int ans = 0;
    switch (c)
    {
    case 'A':
        ans = 16000 ;
        break;
    case 'B':
        ans = 12000;
        break;
    default:
        ans = 10000;
    }

    if (a < 14)
    {
        ans *= 0.7;
    }
    else if (a < 19)
    {
        ans *= 0.8;
    }
    
    return ans;
}

int main(){
    char course;
    int age, price;
    
    printf("코스를 선택해 주세요: ");
    scanf("%c", &course);
    printf("나이를 입력해 주세요: ");
    scanf("%d", &age);

    price = compute(course, age);
    printf("가격: %d원 \n", price);


    return 0;
}