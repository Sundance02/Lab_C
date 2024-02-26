#include<stdio.h>

int main()
{
    int integer;


    scanf("%d", &integer);



    printf("%d%.0d", integer%1000,integer/1000);




    return 0;
}