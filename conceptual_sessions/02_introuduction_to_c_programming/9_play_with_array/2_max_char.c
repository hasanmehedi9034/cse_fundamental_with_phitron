#include <stdio.h>
#include <string.h>

int main() {
    char ar[100];
    scanf("%s", &ar);
    strupr(ar);

    int count[26] = {0};
    for (int i = 0; i < strlen(ar); i++) {
        count[ar[i] - 'A']++;
    }

    char ans1;
    int ans2 = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > ans2) {
            ans2 = count[i];
            ans1 = i + 'A';
        }
    }

    printf("%c -> %d", ans1, ans2);

    return 0;
}