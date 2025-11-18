// grading system 
#include <stdio.h>
int main()
{ int marks;
printf ("enter the marks:");
scanf ("%d;& marks");
if (marks>=90) {
    printf ("Grade:A\n");
} else if(marks>=89-75) {
    printf ("Grade:B\n");
} else if(marks>=74-50) {
    printf ("Grade:C\n");
} else if(marks<=50) {
    printf("Grade:F\n");
}

    return 0;
}
