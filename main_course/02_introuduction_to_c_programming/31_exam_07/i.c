#include <stdio.h>
#include <string.h>

int main() {
    int n1;
    scanf("%d", &n1);

    char ch[n1];
    scanf("%s", &ch);

    int len = strlen(ch);

    int n = 0, z = 0;
    for (int i = 0; i < len; i++) {
        if(ch[i] == 'z') {
            z++;
        }
        if (ch[i] == 'n') {
            n++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", 1);
    }
    for (int i = 0; i < z; i++) {
        printf("%d ", 0);
    }
}