// drivingTime by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main() {
    //Time estimation for distance given X mph
    int drivingDistance;
    int drivingSpeed;

    printf("What is the distance you're traveling from A to B? (in miles): ");
    scanf("%d", &drivingDistance);
    printf("How fast are you going (in miles/hour?): ");
    scanf("%d", &drivingSpeed);
    int hours = drivingDistance / drivingSpeed;
    float minutes = drivingSpeed / 60.0;
    int remainingMins = (drivingDistance % drivingSpeed) / minutes;
    printf("It will take %d hours and %d minutes to get to your location.\n", hours, remainingMins);
    return 0;
}