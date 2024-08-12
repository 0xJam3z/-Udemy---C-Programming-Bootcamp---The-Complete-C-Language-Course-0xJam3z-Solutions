// Time Conversion by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main() {
    int inputSeconds;
    int minutes, hours, secondsRemaining;

    printf("Input seconds: ");
    scanf("%d", &inputSeconds);
    hours = inputSeconds / 3600;
    minutes = (inputSeconds - hours * 3600) / 60; 
    secondsRemaining = (inputSeconds - hours * 3600) % 60;
    printf("%d hour(s) %d minutes %d seconds", hours, minutes, secondsRemaining);
    return 0;
}
