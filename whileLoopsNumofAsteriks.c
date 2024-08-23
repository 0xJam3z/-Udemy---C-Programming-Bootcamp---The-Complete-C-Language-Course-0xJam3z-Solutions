// Take a numeric input of how many asterisks a user wants printed to the screen. 
// Use a while loop to complete this task.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int userInput;
    printf("Input how many asterisks you'd like printed to screen: ");
    scanf("%d", &userInput);
    int count = 1;
    while (count <= userInput)
    {
        printf("*");
        count +=1;
    }
    return 0;
}