// Take input of a number and input of a power and calculate the result.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, pow, powOf, i;
    printf("Input an integer: ");
    scanf("%d", &num);
    printf("Input the power of the integer: ");
    scanf("%d", &pow);
    i = 1;
    powOf = num;
    while (i < pow)
{
    powOf*=powOf;
    i++;
}        
    printf("%d to the power of %d = %d\n", num, pow, powOf);

    return 0;
}
