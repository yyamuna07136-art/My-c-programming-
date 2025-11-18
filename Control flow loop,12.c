//polindrome checker
#include <stdio.h>
int main() {
    int n, reversed_num = 0, remainder, original_num;
    printf ("Enter an integer:");
    scanf("%d", &n );
    original_num = n;
    while (n != 0) {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
        n /= 10;
    }
    if (original_num == reversed_num) {
    printf ("%d is a polindrome number.\n", original_num);
} else {
    printf ("%d is not a polindrome number.\n",original_num);
}
}   
            
    
