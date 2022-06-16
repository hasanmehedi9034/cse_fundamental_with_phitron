#include <stdio.h>

void makeNArray(int n, int squares[]) {
    for (int i = 1; i <= n; i++) {
        squares[i - 1] = i * i;
    }
}

int main() {
    int n = 8;
    int squares[n];
    
    makeNArray(n, squares);
    for (int i = 0; i < n; i++) {
        printf("%d ", squares[i]);
    }
}