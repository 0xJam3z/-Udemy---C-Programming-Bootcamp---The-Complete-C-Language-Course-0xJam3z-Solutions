// Using a do-while loop take an input of a legal grade between 0 & 100. 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int grade;
    do {
        printf("Input a grade between 0-100: ");
        scanf("%d", &grade);
    } while (grade < 0 || grade > 100);
    printf("%d is a legal input grade.\n", grade);
    return 0;
}
