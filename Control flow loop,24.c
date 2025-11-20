// sumof squares of first n numbers 
#include <stdio.h>

int main() {
    int  n,i;
    int sum = 0;
    
    printf("Enter N:");
    scanf("%d",&n);
    for(i =1; i <= n; i++) {
    sum += i*i;
    }
    printf ("sum of squares of first %d numbers  is %d\n",n,sum);
    return 0;
    
}
