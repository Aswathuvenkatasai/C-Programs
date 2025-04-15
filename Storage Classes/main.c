#include <stdio.h>

extern int count;  

void display();

int main() {
    display();
    printf("count in main = %d\n", count);
    return 0;
}
