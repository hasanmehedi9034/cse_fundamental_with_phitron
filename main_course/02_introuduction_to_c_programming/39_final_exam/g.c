#include <stdio.h>

int main() {
    int l, r;
    char st[100000];
    scanf("%d %d", &l, &r);
    scanf("%s", &st);

    for (int i = l - 1, j = r - 1; i < j; i++, j--) {
        char temp = st[i];
        st[i] = st[j];
        st[j] = temp;
    }

    printf("%s", st);
}