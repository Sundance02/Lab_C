#include <stdio.h>


void swap(double *a, double *b);

int main(){
    double a1, a2, a3;
    scanf("%lf%lf%lf", &a1,&a2,&a3);
    swap(&a1, &a2);
    swap(&a1, &a3);

    printf("%.2lf %.2lf %.2lf", a1, a2, a3);

    return 0;
}

void swap(double *a, double *b){

    double s = *a;
    *a = *b;
    *b = s;

}
