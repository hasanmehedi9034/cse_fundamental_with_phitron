#include <stdio.h>

int main() {
    int elements[] = {10, 20, 30, 40, 50};
    int sum_of_all_elements = 0;

    for (int i = 0; i < 5; i++) {
        sum_of_all_elements += elements[i];
        printf("%d\n", elements[i]);
    }

    printf("%d", sum_of_all_elements);

    return 0;
}