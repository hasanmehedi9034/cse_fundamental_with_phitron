#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void print_struct (struct Student st) {
    printf("Name: %s, Roll: %d, Marks: %d\n", st.name, st.roll, st.marks);
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student st[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", &st[i].name, &st[i].roll, &st[i].marks);
    }

    for (int i = 0; i < n; i++) {
        print_struct(st[i]);
    }
}