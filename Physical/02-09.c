#include<stdio.h>

int main()
{
    char a;
    char b;
    char c;
    char d;
    char e;


    scanf("%c %c %c %c %c", &a, &b, &c ,&d, &e);

    int one = a+1;
    int two = c+1;
    int three  = e+1;


    printf("%c\n%c\n%c\n%c\n%c", (char)one, b, (char)two, d, (char)three);
    return 0;
}