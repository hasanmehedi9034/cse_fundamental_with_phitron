#include <stdio.h>
#include <string.h>

int main() {
    char guest_name[100];
    scanf("%s", &guest_name);

    char residence_host[100];
    scanf("%s", &residence_host);

    char pile[100];
    scanf("%s", &pile);

    int i = 0;
    while (pile[i] != '\0') {
        int j = 0;
        while (guest_name[j] != '\0') {
            if (guest_name[j] == pile[i]) continue;
            j++;
        }
        j = 0;
        while (guest_name[j] != '\0') {
            if (residence_host[j] == pile[i]) continue;
        }
    }
}