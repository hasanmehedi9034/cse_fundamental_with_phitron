#include <stdio.h>

int add (int a, int b) {

}

int get_min (int a, int b) {
    if (a < b) return a;
    else return b;
}

int get_array_min(int n, int a[]) {
    int min = a[0];
    for (int i = 0; i < n; i++) {
        min = get_min(min, a[i]);
    }
    return min;
}

void make_double (int n, int a[]) {
    for (int i = 0; i < n; i++) {
        a[i] *= 2;
    }
    return a;
}

int reverse_array(int n, int a[]) {
    for (int i = 0, j = n -1; i > j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return a;
}

int main() {
    int a[] = {4, 5, 3, 2, 5, 1};
    int array_size = 6;

    printf("%d", a[0]);
}