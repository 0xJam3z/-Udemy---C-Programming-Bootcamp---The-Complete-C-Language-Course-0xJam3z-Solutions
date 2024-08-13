// Checks whether a number is even or odd using simple if/else
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    printf("Input a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("The number %d is even\n", num);
    else
        printf("The number %d is odd\n", num);
    return 0;
}