// Take two inputs. Number and power. Use for loop to perform calculation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, pow;
    int result = 1;
    int i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power of num: ");
    scanf("%d", &pow);    
    
    for (i= 1; i <= pow; i++)
    {
        result=result*num;
    }
    printf("%d\n", result);
    return 0;
}