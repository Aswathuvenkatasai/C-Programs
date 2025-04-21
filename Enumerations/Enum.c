#include <stdio.h>

enum Color { RED, GREEN, BLUE };

int main() {
    enum Color favoriteColor;

    favoriteColor = GREEN;

    if (favoriteColor == GREEN) {
        printf("Your favorite color is Green!\n");
    }

    return 0;
}
