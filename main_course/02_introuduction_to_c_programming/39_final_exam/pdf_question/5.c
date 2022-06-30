#include <stdio.h>
#include <string.h>

int main() {
    char st[1000];
    scanf("%s", &st);

    int len_st = strlen(st);
    int fr[10] = {0};

    for (int i = 0; i < len_st; i++) {
        if ((st[i] - '0') >= 0 && (st[i] - '0') <= 9) {
            fr[st[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (fr[i] == 0) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}       