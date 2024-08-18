// Advanced Time Conversion by 0xJam3z. Print in clock format! HH:MM:SS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int inputSeconds;
    int minutes, hours, seconds;

    printf("Input seconds: ");
    scanf("%d", &inputSeconds);
    hours = (inputSeconds / 3600);
    minutes = (inputSeconds - hours * 3600) / 60; 
    seconds = (inputSeconds - hours * 3600) % 60;
    
    if (hours < 10)
        printf("0");
    printf("%d :", hours);    
    if (minutes < 10)
        printf("0");
    printf("%d :", minutes);   
    if (seconds < 10)
        printf("0");
    printf("%d\n", seconds);
    return 0;
}
