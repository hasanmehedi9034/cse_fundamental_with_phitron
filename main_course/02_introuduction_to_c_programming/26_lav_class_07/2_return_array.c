#include <stdio.h>
#include <stdlib.h>

struct Array_holder {
    int array[100];
};

struct Array_holder make_array(int n) {
    struct Array_holder ans;
    for (int i = 0; i < n; i++) {
        ans.array[i] = i + 1;
    }
    return ans;
}

int make_n_array(int n) {
    // int *out = (int*) malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++) {
    //     out[i] = i + 1;
    // }
    // return out;
}

int main() {
    int n = 10;
    struct Array_holder ans = make_array(n);

    for (int i = 0; i < n; i++) {
        printf("%d ", ans.array[i]);
    }
}