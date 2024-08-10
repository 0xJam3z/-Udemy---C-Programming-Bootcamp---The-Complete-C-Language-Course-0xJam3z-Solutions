// Simple swap value by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

    // Swap value
int main() {
    double a = 1.1;
    double b = 2.2;
    double c = 0.0;
    printf("Float a is %.1lf\n", a);
    printf("Float b is %.1lf\n", b);
    printf("When we swap these with a temp value we get: \n");
    c = a;
    a = b;
    b = c;
    printf("a: %.1lf, b: %.1lf\n", a, b);
}