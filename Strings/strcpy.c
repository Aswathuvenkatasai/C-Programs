#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[32];
    char *names[30];
    short int count = 0;

    printf("Enter a name: ");
    scanf("%s", name);

    names[count] = (char*)malloc(strlen(name) + 1); // +1 for '\0'
    if (names[count] == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(names[count], name);
    count++;

    for (int i = 0; i < count; i++) {
        printf("Entered string is: %s\n", names[i]);
    }

    // Free allocated memory
    for (int i = 0; i < count; i++) {
        free(names[i]);
    }

    return 0;
}
