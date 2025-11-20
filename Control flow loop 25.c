// number pattern printing
#include <stdio.h>

int main() {
    int rows, i,j,num = 1;
    printf(" Enter number of rows:");
    scanf("%d",&rows);
    for(i =1; i <= rows; i++) {
        for(j = 1; j <= rows;j++) {
            printf ("%d",num);
            num++;
        }
        printf ("\n");
   
}
return 0;
    }
