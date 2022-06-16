#include <stdio.h>

int main() {

    int first_element;
    int difference;
    int number_of_element;

    int sum = 0;

    scanf("%d %d %d", &first_element, &difference, &number_of_element);

    for (int i = 0; i < number_of_element; i++) {
        sum += first_element;
        first_element = first_element + difference;
    }

    printf("%d", sum);


    return 0;
}