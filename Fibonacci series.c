// fibonacci series
#include <stdio.h>

int main() 
{ int n,f3,f1=0,f2=1;
printf ("enter the number \n");
scanf("%d",&n);
while(n!=0)
{ f3=f1+f2;
printf ("%d\t",f1);
n--;
f1=f2;
f2=f3;
}
}
    
