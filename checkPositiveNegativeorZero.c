// Write a program that reads an input number from the user. The program should print "1" if the value is positive, "-1" if it's negative, and "0" if it equals to zero.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Input num1: ");
    scanf("%d", &num1);
    if (num1 > 0)
        printf("1\n");
    else if (num1 < 0)
        printf("-1\n");
    else
        printf("0\n");
    return 0;
}