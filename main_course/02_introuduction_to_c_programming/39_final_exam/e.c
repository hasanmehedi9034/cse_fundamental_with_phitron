#include <stdio.h>

int max_in_array(int n, int a[]) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void input_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sort_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        int min_index = i;
        int min_value = a[i];
        for (int j = (i + 1); j < n; j++) {
            if (min_value > a[j]) {
                min_index = j;
                min_value = a[j];
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

void min_deff (int n, int a[]) {
    int deff = max_in_array(n, a);
    for (int i = 0; i < n - 1; i++) {
        if ((a[i + 1] - a[i]) < deff) {
            deff = a[i + 1] - a[i];
        }
    }
    printf("%d\n", deff);
}
 
int main() {
    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++) {
        int elements;
        scanf("%d", &elements);

        int a[elements];
        input_array(elements, a);
        sort_array(elements, a);
        min_deff(elements, a);
    }
}