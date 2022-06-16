#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char *name[100];
    int class;
    int roll;
    struct Date date_of_birth;
};

struct Date input_date() {
    struct Date date;
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    return date;
}

struct Student input_student() {
    struct Student student;

    printf("Name : ");
    gets(student.name);
    gets(student.name);

    printf("Class : ");
    scanf("%d", &student.class);

    printf("Roll : ");
    scanf("%d", &student.roll);

    printf("Date of Birth : ");
    student.date_of_birth = input_date();

    return student;
}

void print_date(struct Date date) {
    printf("%d-%d-%d", date.day, date.month, date.year);
}

void print_student (struct Student student) {
    printf("Name : %s, Class : %d, roll : %d ", student.name, student.class, student.roll);
    printf("Date of Birth : ");
    print_date(student.date_of_birth);
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        students[i] = input_student();
    }
    for (int i = 0; i < n; i++) {
        print_student(students[i]);
    }
}