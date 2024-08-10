// Fahrenheit/Celcius Conversion in C by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

    // Convert Celcius to F, then convert Fahrenheit to C
int main() {
    double celsius;
    double fahrenheit;

    printf("Input celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("The temperature in fahrenheit is %.1lf degrees\n", fahrenheit);
    printf("Input farenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("The temperature in celcius is %.1lf degrees\n", celsius);
    return 0;
}