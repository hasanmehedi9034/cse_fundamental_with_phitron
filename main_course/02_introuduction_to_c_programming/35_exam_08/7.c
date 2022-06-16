#include <stdio.h>

int count_swaps(int n, int a[]) {
    int count_of_swaps = 0;
    for (int i = 0; i < n; i++) {
        int min_element = a[i];
        int min_index = i;
        for  (int j = i + 1; j < n; j++) {
            if (min_element > a[j]) {
                min_element = a[j];
                min_index = j;
            }
        }
        if  (min_element != a[i]) count_of_swaps++;
        int temp = a[i];
        a[i] = min_element;
        a[min_index] = temp;
    }
    return count_of_swaps;
}

int main() {
    int a[] = {3, 4, 1, 2, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int count = count_swaps(n, a);
    printf("count of swaps : %d", count);
}