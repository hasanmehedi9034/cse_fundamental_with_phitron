#include <stdio.h>

int main() {
    int height, width;
    scanf("%d %d", &height, &width);

    for(int i = 0; i < width; i++) {
        printf("* ");
    }

    for (int i = 0; i < height; i++) {
        printf("*");
        for (int j = 0; j < width - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    for(int i = 0; i < width; i++) {
        printf("* ");
    }
}