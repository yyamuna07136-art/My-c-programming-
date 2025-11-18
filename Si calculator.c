// si calculator
#include <stdio.h>

int sicalculator() {
    int p,t,r,si;
    
    printf("enter your principle amount\n");
    scanf("%d",&p);
    printf ("enter the no of years\n");
    scanf("%d",&t);
    printf ("enter the rate of interest");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("the simple interest is %d\n",si);
}
int main(){
  sicalculator();
}
