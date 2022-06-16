#include <stdio.h>

int main() {
    int s, t, x;
    scanf("%d %d %d", &s, &t, &x);

    for (int i = 1; i <= 24; i++) {
        s++;
        if(s == 24) s = 0;

        if (s == x) printf("Yes");
    }

    return 0;
}