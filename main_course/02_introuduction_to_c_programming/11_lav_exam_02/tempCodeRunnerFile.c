#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("expert");
    }
    else if (marks < 90 && marks > 70) {
        printf("%d", 90 - marks);
    }
    else if (marks <= 70 && marks >= 40) {
        printf("%d", 70 - marks);
    }
    else if (marks <= 40) {
        printf("%d", 40 - marks);
    }

    return 0;
}