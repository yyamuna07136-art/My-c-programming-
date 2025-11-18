//Fibonacci series
#include <stdio.h>
int main() {
    int n,i;
    int t1 = 0,t2 = 1, nextterm;
    printf ("Enter the number of terms:");
    scanf("%d", &n );
    printf ("Fibonacci Series:");
    if (n <= 0) {
        printf ("Please enter a positive integer for the number of terms.\n");
    } else if ( n == 1) {
        printf ("%d\n", t1);
    } else {
        printf ("%d, %d", t1, t2);
        for (i = 3; i <= n; ++i) {
            nextterm = t1 + t2;
            printf (", %d", nextterm);
            t1 = t2;
            t2 =nextterm;
        }
        printf ("\n");
        return 0;
    }
            
