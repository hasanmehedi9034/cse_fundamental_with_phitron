#include <stdio.h>

int main() {
    int elements[] = {10, 20, 50, 40, 50, 30, 40};
    int max_index = 0;
    int max_element = 0;

    for (int i = 0; i < 7; i++) {
        if (max_element < elements[i]) {
            max_element = elements[i];
            max_index = i;
        }
    }

    printf("%d -> %d", max_index, max_element);

    return 0;
}