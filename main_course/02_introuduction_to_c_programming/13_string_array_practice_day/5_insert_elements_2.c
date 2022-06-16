#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int inserted_element = 25;
    int inserted_position = 3;

    for (int i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr_len++;

    for (int i = arr_len - 1; i >= 3; i--) {
        arr[i] = arr[i - 1];
    }
    arr[inserted_position - 1] = inserted_element;

    for (int i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}