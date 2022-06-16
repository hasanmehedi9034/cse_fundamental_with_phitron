#include <stdio.h>

int main() {
    int first_element;
    int difference;

    scanf("%d %d", &first_element, &difference);

    int sum = 0;

    for (int i = first_element; i <= 0; i -= difference) {
        sum += first_element;
        first_element = first_element - difference;
    }

    printf("%d", sum);

    return 0;
}