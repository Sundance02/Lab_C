#include <stdio.h>
#include <math.h>



int main()
{
    float price;
    float per;
    int num;

    scanf("%f %f %d", &price, &per, &num);

    float pro_per = (price-(per/100)*price)*num;

    float pro_double = (floor(num/3))*(2*price)+(num%3)*price ;


    if (pro_double > pro_per)
    {
        printf("Discount %.0f%%\n%.2f", per, pro_per);
    }
    else if ((pro_double < pro_per))
    {
        printf("Buy 2 Get 1\n%.2f", pro_double);
    }
    else{
        printf("Discount %.0f%%\n%.2f", per, pro_per);
    }

    return 0;
}