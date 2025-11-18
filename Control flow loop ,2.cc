//grading system 
#include <stdio.h>
int main() {
    int marks;
    printf ("enter your marks:");
    scanf("%d",&marks);
    if (marks >= 50) {
        if ( marks >= 90) {
        printf ("Grade:A\n");
    } else if ( marks >= 89) {
        printf ("Grade:B\n");
    } else if ( marks >= 75) {
        printf ("Grade:B\n");
    } else if (marks >= 74) {
        printf ("Grade:C\n");
    } else  {
        printf ("Grade:C\n");
    }
    } else {
        printf ("Grade:F\n");
    }
}   
    
    
