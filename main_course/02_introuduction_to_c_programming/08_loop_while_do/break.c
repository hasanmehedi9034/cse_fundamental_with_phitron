#include <stdio.h>
#include <stdbool.h>

int main() {

    // for (int i = 1; i <= 10; i++) {
    //     printf("%d\n", i);

    //     if (i == 5) break;
    // }

    while (true) {
        int input;
        scanf("%d", &input);

        printf("Your input is : %d\n", input);

        if (input == 0) break;
    }
}