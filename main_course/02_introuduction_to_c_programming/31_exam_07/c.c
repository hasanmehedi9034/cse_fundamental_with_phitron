#include <stdio.h>
#include <string.h>

int main() {
    char st[1000];
    scanf("%s", &st);

    int fr[10] = {0};

    for (int i = 0; i < strlen(st); i++) {
        if (st[i] >= '0' && st[i] <= '9') {
            fr[st[i] - '0']++;
        } 
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", fr[i]);
    }
}