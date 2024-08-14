// Get two floating point numbers as input and print maximum and minimum (lowest number vs highest)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float min, max, input1, input2;

    printf("Input a number: ");
    scanf("%f", &input1);
    printf("Input a second number: ");
    scanf("%f", &input2);
    if (input1 > input2)
    {
        max = input1;
        min = input2;
        printf("%.1f is maximum %.1f is minimum\n", max, min);
    }
    else if (input2 > input1)
    {
        max = input2;
        min = input1;
        printf("%.1f is maximum %.1f is minimum\n", max, min);
    }
    else
    {
        printf("The numbers are equal\n");
    }
    return 0;
}