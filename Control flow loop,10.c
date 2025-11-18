//prime number checker
#include <stdio.h>
#include<math.h>
int main() {
    int num,i,isprime =1;
    printf ("Enter a positive integer:");
    scanf("%d", &num );
    if (num <= 1) {
        isprime = 0;
    } else if ( num == 2) {
        isprime = 1;
    } else if (num % 2 == 0) {
        isprime = 0;
    } else {
        for (i = 3; i <= num; i += 2) {
            if ( num % i == 0) {
                isprime = 0;
                break;
            }
        }
    }
        if (isprime) {
            printf (" %d is a prime number.\n",num);
        } else {
        printf("%d is not prime number.\n",num);
        }
        return 0;
    }
            
    
