// Basic control flow grade input for pass/fail by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int inputGrade;
    scanf("Input grade: %d", &inputGrade);
    if (inputGrade >= 60)
        printf("Congratulations! \n");
    else
        printf("Try again! \n");
    return 0;
}