#include "stdio.h"
#include "math.h"

void sqrtform(int x, int y);



int main(){

    int x, y;
    scanf("%d %d", &x, &y);

    sqrtform(x, y);


    return 0;
}

void sqrtform(int x, int y){
    printf("sqrt(%d^2+%d^2)=%.2lf", x, y, sqrt(pow(x, 2)+pow(y, 2)));
}