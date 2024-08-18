// Comparison Operator of Two Nums using a quick oneliner by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    min = (num1 > num2) ? num2 : num1; // Checking for min value using oneliner.
    printf("%d", min);
    return 0;
}