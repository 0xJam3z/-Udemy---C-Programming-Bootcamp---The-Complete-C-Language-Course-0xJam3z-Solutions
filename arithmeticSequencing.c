// arithmeticSequencing.c by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main() {
    /** n-th Term of Arithmetic Sequence
        an = a1 + (n-1) * d 
     **/
    float a1, d;
    int n;
    printf("Enter the initial term (a1): ");
    scanf("%f", &a1);
    printf("Enter the difference (d) in the arithmetic sequence: ");
    scanf("%f", &d);
    printf("Enter the number of elements in the arithmetic sequence: ");
    scanf("%d", &n);
    
    printf("The n-th term of of the arithematic sequence = %.0f\n", a1 + (n-1) * d);
    return 0;
}