#include <stdio.h>
#include <stdbool.h>

int make_square(int x) {
    return x * x;
}

int add_one(int x) {
    return x + 1;
}

int gcd(int x, int y) {
    while (y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int find_gcd(int n, const int a[]) {
    int ans = a[0];

    for (int i = 0; i < n; i++) {
        ans = gcd(ans, a[i]);
    }
    return ans;
}

void make_positive(double d) {
    if (d < 0) {
        printf("your positive number is : %lf\n", (d * (-1)));
    }
    else {
        printf("Already given a positive number : %lf\n", d);
    }
}

int main() {
    int a[] = {4, 8, 12};
    printf("%d", find_gcd(3, a));
}

