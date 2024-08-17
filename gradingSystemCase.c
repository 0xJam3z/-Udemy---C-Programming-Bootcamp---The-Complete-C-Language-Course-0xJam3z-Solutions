// Grading System Case usage provided by Udemy Course. Uploaded for future reference. Rewritten by 0xJam3z (video didn't include F case.)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter your grade (A-F): ");
    scanf("%c", &grade);
    switch (grade) // Specifying Variable
    {
    case 'A':
        printf("Grade between 90-100 \n");
        break;
    case 'B':
        printf("Grade between 80-89 \n");
        break;
    case 'C':
        printf("Grade between 70-79 \n");
        break;
    case 'D':
        printf("Grade between 60-69 \n");
        break;
    case 'F':
        printf("Grade between 50-59 \n");
        break;
    default:
        printf("Not a correct input. \n");
        break;
    }
    return 0;
}