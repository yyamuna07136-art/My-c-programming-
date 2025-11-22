//enum default enum 
#include <stdio.h>
enum week {
    monday,
    tuesday, 
    wednesday, 
    thursday, 
    friday, 
    saturday, 
    sunday 
};
int main() {
    enum week today;
    today = sunday;
    printf ("%d", today);
    return 0;
}
