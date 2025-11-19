//find (GCD) using loops
#include <stdio.h>

int main() {
    int  num1, num2, temp;
    printf("Enter two positive integers:");
    scanf("%d %d", &num1, &num2);
    while (num2 != 0) {
        temp = num2;
        num2 = num1 %  num2;
        num1 = temp;
    }
    
    printf ("The Greatest common Divisor (GCD) is: %d\n", num1);
   
    return 0;
}
