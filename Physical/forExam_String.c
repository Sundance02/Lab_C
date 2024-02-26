#include <string.h>
#include <stdio.h>


int main(){
    char hello[10] = "Hello";
    char e = 'e';

    //หา char ที่ต้องการ return เป็นตำเเหน่งที่เจอ
    printf("%d", strchr(hello, e)-hello); //result = 1

    return 0;
}