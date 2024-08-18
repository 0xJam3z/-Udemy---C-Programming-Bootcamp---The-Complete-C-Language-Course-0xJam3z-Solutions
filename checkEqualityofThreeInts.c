// Take three numbers, check if they're equal by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Input num1: ");
    scanf("%d", &num1);
    printf("Input num2: ");
    scanf("%d", &num2);
    printf("Input num3: ");
    scanf("%d", &num3);
    if (num1 == num2 && num2 == num3)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
    return 0;
}