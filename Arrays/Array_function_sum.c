#include <stdio.h>

int Sum(int arr[], int size) {
    int sum = 0; // Initialize sum

    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to sum
    }

    return sum;
}

int main() {
    int arr[100],n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int total = Sum(arr, n);
    printf("The sum of the array elements is: %d\n", total);

    return 0;
}
