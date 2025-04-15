#include <stdio.h>

int Average(int arr[], int size) {
    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return 0; // Return 0 for empty or invalid arrays
    }

    int sum = 0; // Initialize sum

    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to sum
    }

    return sum / size; // Calculate and return average
}

int main() {
    int numbers[100],n;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }

    int avg = Average(numbers, n);
    printf("The average of the array elements is: %d\n", avg);

    return 0;
}
