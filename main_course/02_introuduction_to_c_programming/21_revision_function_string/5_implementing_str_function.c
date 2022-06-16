#include <stdio.h>

int string_len(char str[]) {
    int ans = 0;
    while(str[ans] != '\0') {
        ans++;
    }
    return ans;
}

int str_len(char str[]) {
    char *ptr = str;
    // int ans = 0;
    while (*ptr != '\0') {
        // ans++;
        ptr++;
    }
    // return ans;
    return ptr - str;
}

void string_concat(char a[], char b[], char out[]) {
    int i = 0, j = 0;

    while (a[i] != '\0') {
        out[i] = a[i];
        i++;
    }

    while (b[j] != '0') {
        out[i] = b[j];
        i++;
        j++;
    }
    out[i] = '\0';
}

void str_concat(char *a, char *b, char *out) {
    char *pa = a;
    char *pb = b;
    char *pout = out;

    while(*pa != '\0') {
        *pout = *pa;
        pa++;
        pout++;
    }

    while (*pb != '\0') {
        *pout = *pb;
        pb++;
        pout++;
    }
    *pout = '\0';
}

int main() {
    char str[100];
    char str2[100];

    scanf("%s %s", &str, &str2);

    char out[str_len(str) + str_len(str2) + 1];

    str_concat(str, str2, out);
    printf("%s", out);
}
