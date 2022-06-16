#include <stdio.h>

int main() {
    char word[10];
    int lenght;
    scanf("%d %s", &lenght, word);


    for (int i = 0; i < lenght; i ++) {
        if (word[i] >= 65 && word[i] <= 90) {
            word[i] = 'a' + (word[i] - 'A');
        }
    }

    printf("%s", word);

    return 0;
}