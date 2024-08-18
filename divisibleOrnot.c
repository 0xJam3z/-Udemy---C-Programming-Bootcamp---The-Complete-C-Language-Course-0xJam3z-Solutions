// Take an input of three digits, if any of them are divisible by one another print DIVISIBLE. If not, print NOT DIVISIBLE.
// Written by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    printf("Input an integer: ");
    scanf("%d", &num1);
    printf("Input another integer: ");
    scanf("%d", &num2);
    printf("Input your last integer: ");
    scanf("%d", &num3);

    if (num1 % num2 == 0 || num1 % num3 == 0 || num2 % num3 == 0 || num2 % num1 == 0 || num3 % num1 == 0 || num3 % num2 == 0)
        printf("DIVISIBLE\n");
    else
        printf("NOT DIVISIBLE.\n");    
    return 0;
}
