#include <stdio.h>

struct Student {
    int roll;
    int class;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    for  (int i = 0; i < n; i++) {
        scanf("%d %d %d", &students[i].roll, &students[i].class, &students[i].marks);
    }

    int total_marks = 0;
    for (int i = 0; i < n; i++) {
        total_marks += students[i].marks;
    }

    printf("Total marks: %d", total_marks);
}