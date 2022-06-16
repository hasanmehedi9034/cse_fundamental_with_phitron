#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char ch[101];
    scanf("%s", &ch);
    int len = strlen(ch);

    bool is_upper = false;
    bool is_lower = false;

    for (int i = 1; i < len; i++) {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            is_upper = true;
        }
        else {
            is_lower = true;
        }
    }

    if (is_upper && !is_lower) {
        for (int i = 0; ch[i] != '\0'; i++) {
            if (ch[i] >= 'A' && ch[i] <= 'Z') {
                ch[i] = ch[i] + 'a' - 'A';
            }
            else if (ch[i] >= 'a' && ch[i] <= 'z') {
                ch[i] = ch[i] + 'A' - 'a';
            }
        }
    }
    printf("%s", ch);
}