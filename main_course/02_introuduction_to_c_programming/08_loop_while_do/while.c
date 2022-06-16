#include <stdio.h>

int main() {

    int monney = 0;
    int target = 100;

    while (monney < target) {
        int given;
        printf("Need more money. Enter Amount : ");
        scanf("%d", &given);

        monney += given;
        printf("Current Money : %d\n", monney);
    }

    return 0;
}