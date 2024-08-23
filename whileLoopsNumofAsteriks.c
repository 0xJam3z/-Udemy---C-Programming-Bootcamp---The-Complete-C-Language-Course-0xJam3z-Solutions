// Take a numeric input of how many asterisks a user wants printed to the screen. 
// Use a while loop to complete this task.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numOfAsterisks;
    int i = 0;
    printf("Input how many asterisks you'd like printed to screen: ");
    scanf("%d", &numOfAsterisks);
    while (i < numOfAsterisks)
    {
        printf("*");
        i++;
    }
    printf("\n");
    return 0;
}