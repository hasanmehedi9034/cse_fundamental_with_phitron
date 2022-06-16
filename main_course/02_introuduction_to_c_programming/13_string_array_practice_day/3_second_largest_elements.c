#include <stdio.h>

int main() {
    int array_elements[] = {-7, 2, 3, 8, 6, 6, 75, 38, 3, 2};
    int largest_element = 0;
    int second_largest_element = 0;

    for (int i = 0; i < 10; i++) {
        if (largest_element < array_elements[i]) {
            largest_element = array_elements[i];
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (largest_element > array_elements[i] && second_largest_element < array_elements[i]) {
            second_largest_element = array_elements[i];
        }
    }

    printf("second largest element = %d\nlargest element = %d", second_largest_element, largest_element);

    return 0;
}