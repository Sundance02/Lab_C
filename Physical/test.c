#include<stdio.h>
#include<ctype.h>
int main()
{
   char z[10];
   char x[10];
   scanf("%s", z);

    for(int i = 0; i<10; i++){
        x[i] = tolower(z[i]);
    }

    printf("%s", x);
    return 0;
}