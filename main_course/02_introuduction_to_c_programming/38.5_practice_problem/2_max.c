#include <stdio.h>

struct Student {
    char name[100];
    int marks;
};

void print_struct(struct Student st) {
    printf("Name: %s, Marks: %d\n", st.name, st.marks);
}

struct Student get_max (int n, struct Student st[]) {
    int max_index = 0;
    int max = st[0].marks;
    for (int i = 0; i < n; i++) {
        if (max < st[i].marks) {
            max = st[i].marks;
            max_index = i;
            printf("hello\n");
        }
    }
    printf("%d\n", max_index);
    return st[max_index];
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student st[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", &st[i].name, &st[i].marks);
    }

    struct Student p = get_max(n, st);
    print_struct(p);
}