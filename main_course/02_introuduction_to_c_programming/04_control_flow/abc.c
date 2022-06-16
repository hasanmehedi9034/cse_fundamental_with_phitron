#include <stdio.h>

int main() {

    int marks;
    scanf("%d", &marks);

    if(marks >= 40) {
        printf("You have Passed.\n");
    }
    else {
        printf("You are failed.\n");
    }

    return 0;
}