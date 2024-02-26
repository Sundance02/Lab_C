#include <stdio.h>
int main(){

    int number[] = {100,200,300};
    int *pt;
    pt = number;
    printf("number[0] = %d \n", *pt);
    printf("number[1] = %d \n", *(pt+1));
    printf("number[2] = %d \n", *(pt+2));

}