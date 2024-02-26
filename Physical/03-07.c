#include<stdio.h>

int main()
{
    float s_price;
    float discount;
    float num;

    scanf("%f %f %f", &s_price, &discount, &num);


    printf("%.2f", (s_price-((discount/100)*s_price))*num);

    return 0;
}