#include <stdio.h>

void sort(int n, int a[]) {

}

void print_array (int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {12, 5, 21, 8, 2, 4, 1, 3};
    int len_a = sizeof(a) / sizeof(a[0]);

    sort(len_a, a);
    print_array(len_a, a);
}