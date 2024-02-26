#include "stdio.h"
#include "math.h"

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);



int main(){

    double celcius;
    char type;

    scanf("%lf %s", &celcius, &type);

    if (type == 'c' || type == 'C'){
        double ans = celsiusToFahrenheit(celcius);
        printFarenheit(ans);
    }
    else{
        double ans = fahrenheitToCelcius(celcius);
        printCelcius(ans);        
    }
    

    return 0;
}

double celsiusToFahrenheit(double celcius){
    return (celcius*(9.0/5.0))+32;
}

void printFarenheit(double celcius){
    printf("%.2lf f", celcius);
}

double fahrenheitToCelcius(double fahrenheit){
    return ((fahrenheit-32)*(5.0/9.0));
}

void printCelcius(double fahrenheit){
    printf("%.2lf c", fahrenheit);
}



