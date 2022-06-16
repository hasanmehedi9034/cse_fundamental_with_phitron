#include <stdio.h>
#include <string.h>

unsigned int binary_to_int (char str[]) {
    int len_str = strlen(str);
    unsigned int ans = 0;

    for (int i = len_str - 1, p2 = 1; i >= 0; i--, p2 *= 2) {
        int bit = str[i] - '0';
        if (bit == 1) {
            ans += p2;
        }
    }
    printf("%d", ans);
    return ans;
}

unsigned int get_binary (char str[]) {
    int len = strlen(str);
    unsigned int ans = 0;

    for (int i = 0; i < len; i++) {
        int bit = str[i] - '0';
        if (bit == 1) {
            ans = ans * 2 + bit;
        }
    }
    printf("%d", ans);
    return ans;
}

void to_binary(int val, char str[]) {
    while (val > 0) {
        int digit = val % 2;
        val = val / 2;
        printf("%d\n", digit);
    }
}

int main() {
    char str[199];
    unsigned int val = 10;
    to_binary(val, str);
}