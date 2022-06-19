#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void print_structure(struct Student st) {
    printf("%s %d %d\n", st.name, st.roll, st.marks);
}

int main() {
    struct Student a[3];
    for (int i = 0; i < 3; i++) {
        scanf("%s %d %d", &a[i].name, &a[i].roll, &a[i].marks);
    }

    for (int i = 0; i < 3; i++) {
        print_structure(a[i]);
    }
}