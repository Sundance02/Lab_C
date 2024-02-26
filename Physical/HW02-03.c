#include<stdio.h>

int main()
{
    int integer;
    char space = ' ';

    scanf("%d", &integer);
    

    printf("%-81d", integer/10000);
    printf("%-81d", integer/1000);
    printf("%-81d", integer/100);
    printf("%-81d", integer/10);
    printf("%-81d", integer);

    return 0;
}