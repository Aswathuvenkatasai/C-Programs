#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocate memory for 5 integers
    arr = (int*)malloc(n * sizeof(int));

    // Initialize
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    // Resize to hold 10 integers
    arr = (int*)realloc(arr, 10 * sizeof(int));

    // Add new values
    for (int i = 5; i < 10; i++)
        arr[i] = (i + 1) * 10;

    // Print all 10 values
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
