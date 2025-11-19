//largest of 3 numbers (function)
#include<stdio.h>

    int largest (int a,int b, int c) {
        if(a >= b && a >= c) {
            printf ("a is largest \n");
            scanf("%d",&a);
        }
       else if(b >= a && b >= c) {
           printf ("b is largest \n");
            scanf("%d",&b);
       }
       else {
           printf (" c is largest \n");
       }
    }
    
        int main() {
            largest(9,5,3);
  return 0;
}
