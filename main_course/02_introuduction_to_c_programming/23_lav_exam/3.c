#include <stdio.h>
#include <string.h>

void makeStrCopy(char in[], char out[]) {
    int len = strlen(in);
    for (int i = 0; i < len; i++) {
        out[i] = in[i];
    }
    out[len] = '\0';
}

int main() {
    char in[100];
    scanf("%s", &in);
    
    char out[strlen(in) + 1];

    makeStrCopy(in, out);
    printf("the out string is : %s", out);
}