// Using a for loop print x1000 "I'm sorry for not listening to 0xJam3z. I will try harder next time" 1000 times
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int counter = 0;
    for (i=1; i<=1000; i++) 
    {
        counter+=1;
        printf("%d I'm sorry for not listening to 0xJam3z. I will try harder next time.\n", counter);
    }
    return 0;
}
