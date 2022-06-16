#include <stdio.h>
#include <stdbool.h>

int main() {
    int ara[] = {10, 12, 20, 25, 13, 10, 9, 40, 60, 5};
    int size = 10;
    int search_element;
    scanf("%d", &search_element);
    int search_index;

    for (int i = 0; i < 10; i++) {
        if (ara[i] == search_element) {
            search_index = i;
        }
    }

    if (search_element > 0) {
        printf("%d", search_index);
    }
    else {
        printf("not found");
    }

    return 0;
}
