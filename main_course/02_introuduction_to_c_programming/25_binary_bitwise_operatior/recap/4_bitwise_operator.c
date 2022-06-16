#include <stdio.h>
#include <string.h>

void to_binary2 (unsigned int val, char str[], int k) {
    int idx = 0;
    while (val > 0) {
        int digit = val % 2;
        val = val / 2;
        str[idx] = digit + '0';
        idx++;
    }
    for (int i = idx; i < k; i++) {
        str[i] = '0';
    }
    str[k] = 0;
    strrev(str);
}

void to_binary (unsigned int val, char str[], int k){
    int idx = 0;
    while (val > 0) {
        int digit = val % 2;
        val = val / 2;
        str[idx] = '0' + digit;
        idx++;
    }
    for (int i = idx; i < k; i++) str[i] = '0';
    str[k] = 0;
    strrev(str);
}

int main() {
    unsigned int x = 10;
    unsigned int y = 35;
    unsigned int and = x & y;
    unsigned int or = x | y;
    unsigned int xor = x ^ y;

    char sx[100], sy[100], sand[100], sor[100], sxor[100];

    to_binary(x, sx, 8);
    to_binary2(y, sy, 8);
    to_binary2(and, sor, 8);
    to_binary2(or, sor, 8);

    printf("sx = %s\n", sx);
    printf("sy = %s\n", sy);
    printf("sa = %s\n", sand);
    printf("so = %s\n", sor);
}