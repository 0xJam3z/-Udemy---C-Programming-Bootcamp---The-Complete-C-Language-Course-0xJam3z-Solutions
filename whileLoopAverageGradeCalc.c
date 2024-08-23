// Take x number of grades as input until user inputs -1. Find the average of.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int inputGrade, gradeAverage, i;
    i = 0;
    gradeAverage = 0;
    printf("Input a grade and use -1 to stop calculating: ");
    scanf("%d", &inputGrade);
    while (inputGrade !=-1) 
    {
        gradeAverage = gradeAverage + inputGrade;
        i++;
        printf("Input a grade and use -1 to stop calculating: ");
        scanf("%d", &inputGrade);
    }
    
    printf("The average grade of entered grades is %.1f \n", (float)gradeAverage/i);
    return 0;
}
