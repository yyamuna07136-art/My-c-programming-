//recursion  sum of factorial in array
#include <stdio.h> 
int main() {
    int sum(int n) {
        if (n==0)
        return+sum(n-1);
    }
int main() {
    int a=sum(5);
   printf ("%d",a);
}
}
    
