#include <stdio.h>
#include <string.h>
#include <math.h>

char decimal_to_binary (int n) {
    char reverse_number[100];
    int i = 0;

    while (n > 0) {
        int digit = n % 2;
        n /= 2;
        reverse_number[i] = digit + '0';
        i++;
    }
    reverse_number[i] = '\0';
    strrev(reverse_number);
    return reverse_number;
}

void binary_to_decimal (char a[]) {
    int len = strlen(a);

    int ans = 0;
    for (int i = 0, j = (len - 1); i < len; i++, j--) {
        a[i] = a[i] - '0';
        ans += (a[i] * pow(2, j));
    }
    printf("%d\n", ans);
}

int main() {
    char binary_number[] = "10";
}