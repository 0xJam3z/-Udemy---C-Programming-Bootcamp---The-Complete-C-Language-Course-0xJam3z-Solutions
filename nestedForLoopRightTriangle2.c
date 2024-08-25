// Write a program that receives an integer.
// Program should print a right angled Triangle with each line representing
// the number 1 for line 1, 22 for line two, etc etc.
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, i, j;
    printf("Input an integer: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
{
        for (j=1; j <= i; j++)
            printf("%d", i);        
        printf("\n");    
}
    return 0;
}