#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    scanf("%s", &name);
    strupr(name);

    int count[26] = {0};

    int i = 0;
    while (name[i] != '\0') {
        count[name[i] - 'A']++;
        i++;
    }

    int max = 0;
    char c;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            c = i;
        }
    }

    printf("%c -> %d", c + 'A', max);
    return 0;
}