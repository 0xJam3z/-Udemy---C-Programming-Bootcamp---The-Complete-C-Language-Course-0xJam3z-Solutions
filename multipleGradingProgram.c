/*  Get grade from user. If grade 80+ print "Excellent Job!"
    If grade is less than 80 but higher than 60 print "Not bad!"
    If grade is less than 60 print "Oh, you failed."
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inputGrade;
    printf("Input your grade: ");
    scanf("%f", &inputGrade);
    if (inputGrade >= 80)
        printf("Excellent job!");
    else if (inputGrade >= 60)
        printf("Not bad!");
    else
        printf("Oh, you failed.");
}