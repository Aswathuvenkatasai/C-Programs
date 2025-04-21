#include <stdio.h>

typedef enum {
    MON, TUE, WED, THU, FRI, SAT, SUN
} Day;

int main() {
    Day today = WED;

    printf("Day number: %d\n", today);
    printf("Size of Day is %d",sizeof(Day));

    return 0;
}
