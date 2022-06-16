#include <stdio.h>
#include <string.h>

unsigned int binary_to_decimal (char str[]) {
    int len = strlen(str);
    int ans = 0;
    for (int i = len - 1, p2 = 1; i >= 0; i--, p2 *= 2) {
        int bit = str[i] - '0';
        printf("%d -> %d\n", bit, p2);
        if (bit == 1) {
            ans += p2;
        }
    }
    return ans;
}

unsigned int binary_to_decimal_2(char str[]) {
    int len = strlen(str);
    int ans = 0;
    for (int i = 0; i < len; i++) {
        int bit = str[i] - '0';
        ans = ans * 2 + bit;
    }
    return ans;
}

void decimal_to_binary(unsigned int val, char str[]) {
    int idx = 0;
    while (val > 0) {
        int d = val % 2;
        val = val / 2;
        printf("%d\n", d);
        str[idx] = '0' + d;
        idx++;
    }

    // reverse number;
    str[idx] = '\0';
}

int main() {
    char binay[1000];
    scanf("%s", &binay);
    printf("%d", binary_to_decimal(binay));

    // char str[100];
    // unsigned int n = 36;
    // decimal_to_binary(n, str);

    // printf("%s\n", str);
}
