#include <stdio.h>

int main() {
    int marks[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter student %d Mark : ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 3; i++) {
        marks[i] = marks[i] + 3;
    }

    for (int i = 0; i < 3; i++) {
        printf("Student %d got %d marks\n", i + 1, marks[i]);
    }

    return 0;
}