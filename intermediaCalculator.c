// Intermedia Calculator using switch cases by 0xJam3z
/*  Reads 1 character ('+', '-', '*', '/', '%')
    Reads 2 numbers from user (int only)
    Uses switch cases to calculate and print out the result
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputOperator;
    int num1, num2;
    printf("Input a mathematical operator (+, -, *, /, %%)");
    scanf("%c", &inputOperator);
    printf("Input a number: ");
    scanf("%d", &num1);
    printf("Input a second number: ");
    scanf("%d", &num2);

    switch (inputOperator)
    {
    case '+':
        printf("%d %c %d = %d\n", num1, inputOperator, num2, (num1 + num2));
        break;
    case '-':
        printf("%d %c %d = %d\n", num1, inputOperator, num2, (num1 - num2));
        break;
    case '*':
        printf("%d %c %d = %d\n", num1, inputOperator, num2, (num1 * num2));
        break;
    case '/':
        if (num2 == 0)
            printf("You cannot divide by zero. \n");
        else
            printf("%d %c %d = %d\n", num1, inputOperator, num2, (num1 / num2));
        break;
    case '%':
        if (num2 == 0)
            printf("You cannot divide by zero. \n");
        else
            printf("%d %c %d has a remainder of %d\n", num1, inputOperator, num2, (num1 % num2));
        break;
    default:
        printf("Input error. \n");
        break;
    }
    return 0;
}