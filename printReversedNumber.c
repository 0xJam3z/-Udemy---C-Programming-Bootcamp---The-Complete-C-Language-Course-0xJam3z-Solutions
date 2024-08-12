// Input 3 numbers. Program will reverse these 
// three numbers step by step.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int digits, units, tens, hundreds;
    printf("Input 3 digits: ");
    scanf("%d", &digits);
    hundreds = digits / 100;
    tens = (digits / 10) % 10;
    units = digits % 10;
    printf("The inverse of %d is %d%d%d\n", digits, units, tens, hundreds);
    return 0;
}