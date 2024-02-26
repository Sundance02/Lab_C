#include "stdio.h"
double getValue();

double findMin(double numlist[], int size);  //-  หาค่าที่น้อยที่สุด
double findMax(double numlist[], int size);  //-  หาค่าที่มากที่สุด
double findAvg(double numlist[], int size);  //-  หาค่าเฉลี่ย


int main(){

    int n;
    scanf("%d", &n);
    double numlist[n];

    for (int i=0; i<n; ++i) {
        numlist[i] = getValue();
    }

    double min, max, avg;
    min = findMin(numlist, n);
    max = findMax(numlist, n);
    avg = findAvg(numlist, n);


    printf("%d Values\n", n);
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.3lf", avg);

    return 0;
}



double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double numlist[], int size){
    double min = 10000;

    int i = 0;
    while(i < size){
        if (numlist[i] < min){
            min = numlist[i];
        }
        i++;
    }
    return min;
}


double findMax(double numlist[], int size){
    double max = 0;

    int i = 0;
    while(i < size){
        if (numlist[i] > max){
            max = numlist[i];
        }
        i++;
    }
    return max;
}

double findAvg(double numlist[], int size){
    double avg = 0;

    int i = 0;
    while(i < size){
        avg += numlist[i];
        i++;
    }
    return (avg/size);
}