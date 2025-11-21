#include <stdio.h>
int main() {
    int arr[100],n ;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        printf("Enter %d elements:\n",n);
    }
   
    printf("reversed array:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf ("%d",arr[i]);
    return 0;
}
}
