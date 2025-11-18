//print numbers in reverse order
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number N:");
    scanf("%d", &n);
    while(n >= 1) {
        printf ("%d\n",n);
        n--;
    }
    return 0;
}
