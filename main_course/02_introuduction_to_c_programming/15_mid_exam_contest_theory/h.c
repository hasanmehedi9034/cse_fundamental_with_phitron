#include <stdio.h>

int main() {
    int array_element, rotation_time;
    scanf("%d %d", &array_element, &rotation_time);

    int array[array_element];
    for (int i = 0; i < array_element; i++) {
        scanf("%d", &array[i]);
    }

    for (int j = 1; j <= rotation_time; j++) {
        int temp = array[0];
        for (int k = 1; k < array_element; k++) {
            array[k - 1] = array[k];
        }
        array[array_element - 1] = temp;
    }

    for (int l = 0; l < array_element; l++) {
        printf("%d ", array[l]);
    }


    return 0;
}
