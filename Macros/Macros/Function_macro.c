#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main(){

    int a = 18, b = 76;

    printf("Minimum: %d", min(a, b));

    return 0;
}
