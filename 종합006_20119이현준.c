#include <stdio.h>

void print_menu();
double plus(double a,double b);
double minus(double a,double b);
double times(double a,double b);
double divide(double a,double b);

double a,b;
char sign;

int main(){
    print_menu();
}

void print_menu(){

    for (int i = 0; i < 20; i++)
    {
        printf("-");
    }

    printf("\n");
    printf("원하는 메뉴를 입력하시오>> (+ - * /)");
    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        printf("-");
    }
    
    printf("\n");
    scanf("%c", &sign);
    printf("원하는 두 수를 입력하시오 >> ");
    scanf("%lf %lf", &a,&b);

        switch (sign)
    {
    case '+':
        printf("%lf + %lf = %lf", a,b,plus(a,b));
        break;
    
    case '-':
        printf("%lf - %lf = %lf", a,b,minus(a,b));
        break;
    case '*':
        printf("%lf * %lf = %lf", a,b,times(a,b));
        break;
    case '/':
        printf("%lf / %lf = %lf", a,b,divide(a,b));
        break;
    default:
        printf("뭔가 뭔가 잘못됨 ㅅㄱ ㅋㅋㄹㅃㅃ");
        break;
    }
    printf("\n");
    for (int i = 0; i < 20; i++)
    {
        printf("-");
    }
}

double plus(double a, double b){
    return a+b;
}

double minus(double a, double b){
    return a-b;
}

double times(double a, double b){
    return a*b;
}

double divide(double a, double b){
    return a/b;
}