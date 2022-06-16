#include <stdio.h>

int get_gcd (int a, int b) {
    int answer = a;

    while (b % a != 0) {
        answer = b % a;
        b = a;
        a = answer;
    }
    return answer;
}

int main() {
    int n = 10;

    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int final_gcd = numbers[0];
    for (int i = 1; i < 10; i++) {
        final_gcd = get_gcd(final_gcd, numbers[i]);
    }

    printf("%d", final_gcd);
}
