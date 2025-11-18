// factorial calculation 
#include <stdio.h>
int main() {
    int number;
    long long factorial =1;
    int i;
    printf ("Enter a non negative integer:");
    scanf("%d", & number );
    if (number < 0) {
        printf ("Factorial is not defined for negative numbers.\n");
    }
    else if ( number == 0) {
        printf ("The factorial  of 0 is 1.\n");
    }
    else {
        for (i=1; i <= number; i++) {
            factorial *= i; 
        }
        printf ("The factorial of %d is %lld.\n", number, factorial);
    }
      return 0;
}
    
