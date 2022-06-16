#include <stdio.h>
#include <string.h>

int main(){

    char name[100];
    scanf("%s", &name);

    char different_letter[100]= "";

    for (int i = 0; i < strlen(name); i++) {
        if (strchr(different_letter, name[i]) == 0) {
            strncat(different_letter, &name[i], 1);
        }
    }

    if (strlen(different_letter) % 2 == 0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }
}
