#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // printf("%.2lf %.2lf %.2lf", a, b, c);

    if((a>b && a<c) || (a>c && a<b))
    {
        printf("%.2lf", a);
    }
            if((b>c && b<a) || (b>a && b<c))
        {
            printf("%.2lf", b);
        }
                if((c>a && c<b) || (c>b && c<a)){
                    printf("%.2lf", c);
            }

    return 0;
}