#include<stdio.h>

int main()
{
    float price;
    float diameter;
    float height;

    scanf("%f %f %f", &price, &diameter, &height);

    float volume = height*(3.14159265359*((diameter/2)*(diameter/2)));

    printf("Volume : %.2fml\n", volume);
    printf("Baht/ml : %.4f", price/volume);

    return 0;
}