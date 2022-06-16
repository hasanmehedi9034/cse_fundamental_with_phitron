#include <stdio.h>

void print_triangula_number(int number) {
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        sum += i;
    }
    printf("%d th triangular number is %d", number, sum);
}

void print_gcd (int x, int y) {
    while (y > 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }

    int gcd = x;
    printf("gcd = %d", gcd);
}

int main() {
    // int n;
    // scanf("%d", &n);
    // print_triangula_number(n);

    int n, m;
    scanf("%d %d", &n, &m);

    print_gcd(n, m);

    return 0;
}

