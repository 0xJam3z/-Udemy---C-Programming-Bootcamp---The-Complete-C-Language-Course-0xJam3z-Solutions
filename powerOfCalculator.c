// X-Value ^ 2,4,6,8 calculator by 0xJam3z
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, x2, x4, x6, x8;
    printf("Input an integer: ");
    scanf("%d", &x);
    x2 = x*x;
    x4 = x2*x2;
    x6 = x4*x2;
    x8 = x4*x4;
    printf("%d to the power of 2 is %d\n", x, x2);
    printf("%d to the power of 4 is %d\n", x, x4);
    printf("%d to the power of 6 is %d\n", x, x6);
    printf("%d to the power of 8 is %d\n", x, x8);    
}
/* 
Note that this is not optimized for values above 2 billion as this was not the intent of this specific problemset from the lecture.
We would need to convert our int into long long for the highest ranges of arithematic. This would also change our %d to %lld
*/