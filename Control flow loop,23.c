// least common multiple
#include <stdio.h>

int main() {
    int  a,b,lcm;
    
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    
    
   int  max = (a > b) ? a : b;
    
    
    while (1) {
        if(max % a == 0 && max % b ) {
            lcm = max;
            break;
        }
       max++;
    }
    
    printf ("The lcm of %d and %d is %d\n",a,b,lcm);
    return 0;
    
}
