#include <stdio.h>

int get_sum (int a, int b) {
    return a + b;
}

int main() {
    int s = get_sum(2, 3);
    int ar[s];
    for (int i = 0; i < s; i++) {
        scanf("%d", &ar[i]);
    }
}