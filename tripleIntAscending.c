// Take a single input of three integers, if they're ascending print ASCENDING, if not, print NOT ASCENDING
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int units, tens, hundreds;
    printf("Input num1: ");
    scanf("%d", &num);
    hundreds = num / 100;
    tens = (num / 10) % 10;
    units = num % 10;
    if (hundreds < tens && tens < units)
        printf("ASCENDING\n");
    else
        printf("NOT ASCENDING\n");
    return 0;
}