// Takes an input value (int) and determine if it's a double or triple digit number
#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;
    printf("Input a number betweeo 10 and 999: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999)
        printf("%d is a triple digit number\n", num);
    else if (num <= 99 && num > 9)
        printf("%d is a double digit number\n", num);
    else
        printf("Invalid input\n");
    return 0;
}