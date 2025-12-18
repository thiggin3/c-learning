//This program uses definitions to convert Fahrenheit to Celsius

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f) //The float here is important because if it was just 5/9 it would truncate to 0

int main(void){
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsious equivalent: %.1f\n", celsius);

    return 0;
}