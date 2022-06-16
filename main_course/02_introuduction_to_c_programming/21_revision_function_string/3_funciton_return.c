#include <stdio.h>
#include <stdlib.h>

int make_digit(int x) {
    int sum = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        printf("%d\n", digit);
        sum += digit;
    }
    return sum;
}

int *make_n_square(int n) {
    int *squares = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        squares[i] = i * i;
    }
    return squares;
}

int main() {
    int n;
    scanf("%d", &n);

    int *sq;
    sq = make_n_square(n);

    for (int i = 0; i < n; i++) {
        printf("%d ", sq[i]);
    }
}