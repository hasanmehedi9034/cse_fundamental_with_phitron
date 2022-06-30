#include <stdio.h>

struct Student {
    char name[100];
    int marks;
    int roll;
    char section;
    int which_class;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %c %d", &students[i].name, &students[i].marks, &students[i].roll, &students[i].section, &students[i].which_class);
    }

    int max_number = 0;
    int max_index = 0;
    int min_number = 0;
    int min_index = 0;
    for (int i = 0; i < n; i++) {
        if (max_number < students[i].marks) {
            max_number = students[i].marks;
            max_index = i;
        }
        else if (min_number > students[i].marks) {
            min_index = i;
            min_number = students[i].marks;
        }
    }
    printf("max name is : %s\n", students[max_index].name);
    printf("min name is : %s\n", students[min_index].name);
}