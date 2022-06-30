#include <stdio.h>

struct Student {
    char name[100];
    int id;
    int marks;
    int total;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", &students[i].name, &students[i].id, &students[i].marks);

        int sum = 0;
        for  (int j = 0; j <= i; j++) {
            if (students[i].id == students[j].id) {
                sum += students[j].marks;
            }
        }
        students[i].total = sum;
    }

    printf("--------\n");
    for (int i = 0; i < n; i++) {
        printf("name: %s, total: %d\n", students[i].name, students[i].total);
    }
}