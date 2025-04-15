#include <stdio.h>

int Minimum(int arr[], int size) {
    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return -1; // Return an error value
    }

    int min = arr[0]; // Initialize min with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int numbers[100];
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }

    int minValue = Minimum(numbers, n);
    printf("The smallest number is: %d\n", minValue);

    return 0;
}
