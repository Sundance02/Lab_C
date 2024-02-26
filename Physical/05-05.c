#include <stdio.h>

int main(){


    int n;
    scanf("%d",&n);

    if (n >= 0)
    while(0 <= n){printf("%d ", n); n--;}

    else
    while(0 >= n){printf("%d ", n); n++;}

    return 0;
}