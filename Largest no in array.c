// largest no in the array element 
#include <stdio.h>
int main() {
    int a[6]={1,2,3,4,5,6};
    int max=a[0];
    for (int  i=1; i<6; i++) {
        if (a[i]>max ) {
            max=a[i];
        }
    }
    printf("%d",max);

    return 0;
}
