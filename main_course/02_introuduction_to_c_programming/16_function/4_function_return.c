#include <stdio.h>

int calc_gcd (int x, int y) {
    while (y > 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }

    int gcd = x;
    return gcd;
}

void calculate_triangle_area (double a, double b, double c) {
    
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int g = calc_gcd(n, m);

    n /= g;
    m /= g;
}