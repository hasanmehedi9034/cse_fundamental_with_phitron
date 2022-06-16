#include <stdio.h>

int main() {
    const int n = 10;
    int values[n];

    for (int i = 0; i < n; i++) {
        values[i] = i + 1;
    }

    values[4] *= 5;
    values[5] = values[1] + values[4];

    for (int  i = 0; i < n; i++) {
        printf("%d -> %d\n", i + 1, values[i]);
    }

    const int n = 20;
    int  values[n];

    int a = 4;

    printf("%d", sizeof(values) / sizeof(values[0]));

    return 0;
}