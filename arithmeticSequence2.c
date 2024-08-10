// arithmeticSequence2 by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

    /** Sum of Arithmetic Sequence
     ** Sn = (a1 + an) * n/2 **/

int main() {
    float an, a1;
    int n;
    printf("What is the initial term? (a1): ");
    scanf("%f", &a1);
    printf("What is the n-th term? (an): ");
    scanf("%f", &an);
    printf("What are the number of elements in the arithmetic sequence?: ");
    scanf("%d", &n);
    printf("The sum of your sequence is: %.0f\n", (a1 + an) * n/2);
    return 0;
}