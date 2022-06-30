#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    scanf("%s", &ch);

    int len_ch = strlen(ch);
    strlwr(ch);

    int count_a = 0;
    int count_others = 0;
    for (int i = 0; i < len_ch; i++) {
        if (ch[i] == 'a') {
            count_a++;
        }
        else {
            count_others++;
        }
    }

    if (count_a < count_others) {
        printf("%d", len_ch - 1 - (count_others - count_a));
    }
    else if (count_a == count_others) {
        printf("%d", len_ch - 1);
    }
    else if (count_a > count_others) {
        printf("%d", len_ch);
    }
}