// Get decimal value from a float
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Code
    float data, decimal;
    int getWholeNumber;
    printf("Input a decimal number: ");
    scanf("%f", &data);
    getWholeNumber = data;
    decimal = data - getWholeNumber;
    printf("Decimal Value extracted is: %.1f", decimal);
}