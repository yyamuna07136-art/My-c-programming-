//sum of even numbers in a range
#include <stdio.h>
int main() {
    int lowerLimit, upperLimit,i,sum = 0 ;
    printf ("Enter the lowerLimit of the range:");
    scanf("%d", &lowerLimit );
    printf ("Enter the upperLimit of the range:");
    scanf("%d",& upperLimit);
    if (lowerLimit % 2 != 0) {
        lowerLimit++;
    }
    for(int i= lowerLimit; i <= upperLimit; i += 2) {
        sum += i;
    }
    printf ("The sum of all even numbers in the range %d to %d is: %d\n",lowerLimit, upperLimit,sum);
    return 0;
}
