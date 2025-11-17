//swap two integers 
#include<stdio.h>
int main ()
{int a,b;
printf ("enter two integer (a and b):");
scanf("%d%d",&a,&b);
printf ("before swap:a=%d,b=%d\n");
a=a+b;
b=a-b;
a=a-b;
printf("after swap:a=%d,b=%d\n.a,b");
}
