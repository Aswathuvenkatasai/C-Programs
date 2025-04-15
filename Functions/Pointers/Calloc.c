#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    float *marks, sum = 0, avg;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    // Allocate memory using calloc
    marks = (float*)calloc(N, sizeof(float));

    if (marks == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter marks for %d students:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    for (int i = 0; i < N; i++) {
        sum += marks[i];
    }

    avg = sum / N;
    printf("Average marks = %.2f\n", avg);

    free(marks);
    return 0;
}
