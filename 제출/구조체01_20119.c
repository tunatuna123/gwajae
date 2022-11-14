#include <stdio.h>

int main(){
    struct MyStruct
    {
        char *name;
        int age;
        char *num;
    };
    struct MyStruct list;
    list.name = "이현준";
    list.age = 17;
    list.num = "8193-1274";

    printf("\n 전화번호 \n");
    printf("성명 : %s \n", list.name);
    printf("나이 : %d \n", list.age);
    printf("성명 : %s \n", list.num);
    return 0;
}