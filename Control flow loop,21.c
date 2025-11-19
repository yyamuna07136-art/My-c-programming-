//break and continue statement 
#include <stdio.h>

int main() {
    int  i;
    printf("Demonstrating break and continue  in a loop:\n");
    
    for (i = 1; i <= 10; i++) {
        if (i % 2== 0) {
            continue;
        }
        
        
            printf ("%d",i);
            if (i== 7) {
                break;
            }
    }
    printf ("\nLoop finished.\n");
   
    return 0;
}
