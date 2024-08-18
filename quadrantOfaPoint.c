// Take input from x,y values and determine if the location is in Quadrant 1, 2, 3, or 4.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    printf("Input the value of x-coordinate: ");
    scanf("%d", &x);
    printf("Input the value of y-coordinate: ");
    scanf("%d", &y);
    if (x > 0 && y > 0)
        printf("Coordinates %d,%d are in Quadrant 1. \n", x, y);
    else if (x < 0 && y > 0)
        printf("Coordinates %d,%d are in Quadrant 2. \n", x, y);
    else if (x < 0 && y < 0)
        printf("Coordinates %d,%d are in Quadrant 3. \n", x, y);
    else if (x > 0 && y < 0)
        printf("Coordinates %d,%d are in Quadrant 4. \n", x,y);
    else
        printf("Invalid input. You cannot use 0 to reach a quadrant.");
    return 0;
}