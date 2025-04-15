#include<stdio.h>
#include<stdlib.h>
#include"Declaration.h"
#include"types.h"
void Pointer_array(unsigned char **ptr) {
    printf("\n/**Pointer Array**/");
    printf("\nEnter the city names:\n");

    for (int i = 0; i < 5; i++) {
        ptr[i] = (unsigned char *)malloc(50 * sizeof(unsigned char)); // Allocate memory
        if (ptr[i] == NULL) {
            printf("Memory allocation failed!\n");
            return;
        }
        printf("%d: ", i + 1);
        scanf("%[^\n]", ptr[i]); // Read input safely
    }

    printf("\nThe cities are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, ptr[i]);
        free(ptr[i]); // Free allocated memory
    }
}