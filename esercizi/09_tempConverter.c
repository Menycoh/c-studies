#include <stdio.h>

int main (){

    float celsius = 0.00f;
printf("Enter temperature in Celsius (C°):");
scanf("%f",&celsius);

float fahrenheit = (celsius * 9/5) + 32;
float kelvin = celsius + 273.15;

printf("Celsius: %.2f\n", celsius);
printf("Fahrenheit: %.2f\n", fahrenheit);
printf("Kelvin: %.2f\n", kelvin);



    return 0;
}