#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

bool is_number (char s) {
    int ch = s - '0';
    if (ch <= 3 && ch >= 1) {
        return true;
    }
    return false;
    
}

int main() {
    char st[101];
    scanf("%s", &st);
    int len = strlen(st);

    char ans[100];
    int ans_index = 0;
    int fr[4] = {0};
    for (int i = 0; i < len; i++) {
        if (is_number(st[i])) {
            fr[st[i] - '0' - 1]++;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < fr[i]; j++) {
            // printf("%d", i + 1);
            ans[ans_index] = i + '0' + 1;
            ans_index++;
            ans[ans_index] = '+';
            ans_index++;
        }
    }
    ans[len] = '\0';
    printf("%s", ans);
}