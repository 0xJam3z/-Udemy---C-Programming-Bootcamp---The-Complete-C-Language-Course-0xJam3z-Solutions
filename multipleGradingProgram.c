/*  Get grade from user. If grade 80+ print "Excellent Job"
    If grade is less than 80 but higher than 60 print "Not bad"
    If grade is less than 60 print "You didn't pass."
*/

int main()
{

    float inputGrade;

    printf("Input a Grade: ");
    scanf("%f", &inputGrade);

    if (inputGrade >= 80)
    {
        printf("Excellet job!");
    }
    else if (inputGrade >= 60)
    {
        printf("Not bad!");
    }
    else
    {
        printf("You didn't pass.");
    }
}