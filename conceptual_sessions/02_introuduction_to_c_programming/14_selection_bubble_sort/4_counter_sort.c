#include <stdio.h>
#include <stdlib.h>

int get_max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int get_max_in_array(int n, int a[]) {
    int ans = a[0];
    for (int i = 1; i < n; i++) {
        if (ans < a[i]) {
            ans = a[i];
        }
    }   
    return ans;
}

int main() {
    int a[] = {11, 5, 4, 3, 8, 2, 1, 10};
    int len_a = sizeof(a) / sizeof(a[0]);

    int len_fr = get_max_in_array(len_a, a);
    int fr[100] = {0};

    for (int i = 0; i < len_a; i++) {
        fr[a[i]]++;
    }

    for (int i = 0; i < 100; i++) {
        if (fr[i] != 0) {
            for (int j = 0; j < fr[i]; j++) {
                printf("%d ", i);
            }
        }
    }
}
