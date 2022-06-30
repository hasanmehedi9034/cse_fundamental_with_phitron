#include <stdio.h>

struct Student {
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};

void print_student(struct Student st) {
    printf("-----------------------\n");
    printf("max number : %s %d %d %c %d\n", st.name, st.marks, st.roll, st.section, st.whichClass);
}

void heigest_marks(int n, struct Student a[]) {
    int max_index = 0;
    int max_number = 0;
    for (int i = 0; i  < n; i++) {
        if (max_number < a[i].marks) {
            max_number = a[i].marks;
            max_index = i;
        }
    }
    print_student(a[max_index]);
}
void lowest_marks(int n, struct Student a[]) {
    int min_marks = a[0].marks;
    int min_index = 0;
    for (int i = 0; i  < n; i++) {
        if (min_marks > a[i].marks) {
            min_marks = a[i].marks;
            min_index = i;
        }
    }
    print_student(a[min_index]);
}


int main() {
    FILE *input_file = fopen("students.txt", "r");
    if (input_file == NULL) {
        printf("file not founded\n");
        return 0;
    }

    int n;
    fscanf(input_file, "%d", &n);

    struct Student st[n];
    for (int i = 0; i < n; i++) {
        fscanf(input_file, "%s %d %d %c %d", &st[i].name, &st[i].marks, &st[i].roll, &st[i].section, &st[i].whichClass);
    }

    heigest_marks(n, st);
    lowest_marks(n, st);
    
    fclose(input_file);
}