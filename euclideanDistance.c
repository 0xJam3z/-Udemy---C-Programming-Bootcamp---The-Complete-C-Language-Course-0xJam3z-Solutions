// Find distance between two points using
// Sqrt of (x1 - x2)^2 + (y1 -y2)^2 -- by 0xJam3z
// Note on compilation have to use -lm flag with gcc to compile.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2, dx, dy, distance, sum_of_squares;
    printf("Input x1: ");
    scanf("%lf", &x1);
    printf("Input y1: ");
    scanf("%lf", &y1);
    printf("Input x2: ");
    scanf("%lf", &x2);
    printf("Input y2: ");
    scanf("%lf", &y2);
    dx = (x1 - x2) * (x1 - x2);
    dy = (y1 - y2) * (y1 - y2);
    sum_of_squares = dx + dy;
    distance = sqrt(sum_of_squares);
    printf("The distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is %.2lf\n", x1, y1, x2, y2, distance);
    return 0;
}