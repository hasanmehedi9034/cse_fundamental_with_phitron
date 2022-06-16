#include <stdio.h>
#include <stdbool.h>

void sort (int n, int a[]) {
    for (int i = 0; i < n; i++) {
        int min_element = a[i];
        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            if (min_element > a[j]) {
                min_element = a[j];
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = min_element;
        a[min_index] = temp;
    }
}

bool check_array(int n, int a[]) {
    sort(n, a);
    for (int i = 0; i < n; i++) {
        if (a[i] != (i + 1)) return false;
    }
    return true;
}

int main() {
    int a[] = {1, 2, 5, 3, 4, 10, 9, 6, 8, 7};
    int n = sizeof(a) / sizeof(a[0]);
    bool is_checked = check_array(n, a);

    is_checked ? printf("all number have this array \n") : printf("all number havent in this array \n");
}