#include <stdio.h>
#include <ctype.h>

int main() {
    // char ch = 'A';
    // printf("%d\n", ch);

    // for (int i = 32; i <= 126; i++) {
    //     printf("%d %c\n", i, i);
    // }
    char ch;
    scanf("%c", &ch);

    if('A' <= ch && ch <= 'Z') {
        printf("Uppercase \n");
    }
    else if ('a' <= ch && ch <= 'z') {
        printf("Lowercase");
    }
    else if ('0' <= ch && ch <= '9') {
        printf("digit\n");
    }
    else {
        printf("Others\n");
    }

    return 0;
}