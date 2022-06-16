#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", &s);

    int fr[2] = {0};
    int i = 0, j = 0;

    while (s[i] != '\0') {
        if (s[i] == '1') {
            fr[1]++;
        }
        if (s[i] == '0' && fr[1] < 7) fr[1] = 0;

        if (s[i] == '0') {
            fr[0]++;
        }
        if (s[i] == '1' && fr[0] < 7) fr[0] = 0;
        i++;
    }

    if (fr[0] >= 7 || fr[1] >= 7) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}