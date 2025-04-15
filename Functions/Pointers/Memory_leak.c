#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int) * 5);  // Allocate memory for 5 integers

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill the array
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    // Intentionally forget to free the memory
    // free(ptr); // <== This line is missing, causing a memory leak

    printf("Memory leak example executed.\n");

    return 0;
}
