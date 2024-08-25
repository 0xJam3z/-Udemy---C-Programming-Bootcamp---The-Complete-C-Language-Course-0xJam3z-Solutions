// Write a program that receives an integer.
// Program should print a right angled Triangle.
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, i, j;
    printf("Input an integer: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
{
        for (j=1; j <= i; j++)
            printf("%d ", j);        
        printf("\n");    
}
    return 0;
}