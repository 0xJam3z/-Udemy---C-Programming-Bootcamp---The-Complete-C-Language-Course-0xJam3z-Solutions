// salaryCalculator by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main() {
    float payPerHour;
    int hoursWorked;
    printf("How much money do you make per hour? ");
    scanf("%f", &payPerHour);
    printf("How many hours did you work this month? ");
    scanf("%d", &hoursWorked);
    printf("For the month you should receive: $%.2f\n", payPerHour * hoursWorked);
    return 0;
}
