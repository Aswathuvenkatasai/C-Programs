#include<stdio.h>
#include<stdlib.h>
#include"Declaration.h"
#include"types.h"

void Pointer_array(unsigned char **ptr) {
    char cities[5][50];  // 5 strings, each max 49 chars (+1 for null)

    printf("\n/**Pointer Array**/\n");
    printf("Enter the city names:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d: ", i + 1);
        scanf("%49s", cities[i]);  // read string safely
    }

    printf("The cities are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, cities[i]);
    }
}
