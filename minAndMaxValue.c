// Get two floating point numbers as input and print maximum and minimum (lowest number vs highest)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input1, input2;

    printf("Input a number: ");
    scanf("%f", &input1);
    printf("Input a second number: ");
    scanf("%f", &input2);
    if (input1 > input2)
    {
        printf("%.1f is maximum %.1f is minimum\n", input1, input2);
    }
    else if (input2 > input1)
    {
        printf("%.1f is maximum %.1f is minimum\n", input2, input1);
    }
    else
    {
        printf("The numbers are equal\n");
    }
    return 0;
}