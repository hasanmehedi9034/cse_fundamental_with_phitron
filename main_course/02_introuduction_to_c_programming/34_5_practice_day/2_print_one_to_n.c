#include <stdio.h>

void print_oneToN(int n) {
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

int main() {
    print_oneToN(10);
}