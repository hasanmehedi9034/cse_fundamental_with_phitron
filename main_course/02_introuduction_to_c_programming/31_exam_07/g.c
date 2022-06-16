#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", &s);

    char name[] = "heidi";
    char tem[6];
    int i = 0, j = 0;

    while(s[i] != '\0') {
        if (s[i] == name[j]) {
            tem[j] = s[i];
            j++;
        }
        i++;
    }

    tem[j] = '\0';
    // printf("%s", tem);
    if (strcmp(name, tem) == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}