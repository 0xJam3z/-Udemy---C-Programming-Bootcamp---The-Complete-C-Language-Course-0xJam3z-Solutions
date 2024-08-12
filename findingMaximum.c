// Find the higher number between two integers using if/else:
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;
    printf("Input an integer: ");
    scanf("%d", &num1);
    printf("Input a second number: ");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("%d is greater than %d.\n", num1, num2);
    else if (num2 > num1)
        printf("%d is greater than %d.\n", num2, num1);
    else
        printf("%d and %d are equal.\n", num1, num2);
    return 0;
}