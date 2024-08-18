// Input an integer. Grab it's absolute value. e.g. -1 = |1|, 562 = |562|. Made by 0xJam3z

#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;
    printf("Input a number (positive or negative): ");
    scanf("%d", &num);
    if (num <0)
        printf("The absolute value of %d is |%d|\n", num, (num * -1));
    else if (num >0)
        printf("The absolute value of %d is |%d|\n", num, num);
    else if (num == 0)
        printf("The absolute value of %d is |%d|\n", num, num);
    else
        printf("Invalid input.\n");
    return 0;
}