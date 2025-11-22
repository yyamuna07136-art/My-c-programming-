//union
#include<stdio.h>
    union nandu {
        int i;
        float f ;
        char name[20];
    };
    int main() {
    union nandu  n;
    n.i=12;
  printf("%d\n",n.i);
  n.f=50.5;
  printf("%f\n",n.f);
  printf("%d\n",n.i);
  return 0;
  
}
