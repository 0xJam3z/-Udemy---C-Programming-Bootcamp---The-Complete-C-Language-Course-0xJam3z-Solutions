// X-Value ^ 2,4,6,8 calculator by 0xJam3z
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    printf("Input an integer: ");
    scanf("%d", &x);
    int xSqr = (x*x);
    printf("%d to the power of 2 is %d\n", x, xSqr);
    printf("%d to the power of 4 is %d\n", x, (xSqr*xSqr));
    printf("%d to the power of 6 is %d\n", x, (xSqr*xSqr*xSqr));
    printf("%d to the power of 8 is %d\n", x, (xSqr*xSqr*xSqr*xSqr));    
}
/* 
Note that this is not optimized for values above 2 billion as this was not the intent of this specific problemset from the lecture.
We would need to convert our int into long long for the highest ranges of arithematic. This would also change our %d to %lld
*/