//recursion  of factorial in array
#include <stdio.h> 
void printNumbers(int n) {
    if(n==0)
    return;
    printNumbers(n-1);
    printf ("%d",n);
}
int main() {
    printNumbers(5);
}
    
    
