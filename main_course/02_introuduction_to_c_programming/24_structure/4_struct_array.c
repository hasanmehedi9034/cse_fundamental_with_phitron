#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char *name[100];
    int class;
    int roll;
    struct Date dob;
};

void print_date (struct Date date) {
    printf("%d-%d-%d", date.day, date.month, date.year);
}

void print_student(struct Student st) {
    printf("Name : %s\nClass : %d\nRoll : %d\nDate of birth : ", st.name, st.class, st.roll);
    print_date(st.dob);
    printf("\n\n");
}

struct Date input_date() {
    struct Date date;

    printf("Your birth day : ");
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    return date;
}

struct Student input_Student() {
    struct Student st;

    printf("Name : ");
    gets(st.name);
    gets(st.name);

    printf("Class : ");
    scanf("%d", &st.class);

    printf("Roll : ");
    scanf("%d", &st.roll);

    printf("Date of Birth : ");
    st.dob = input_date();

    return st;
}

int main() {
    // struct Student st1 = {
    //     .class = 9,
    //     .roll = 10,
    //     .dob = {30, 11, 1995}
    // };

    // char name[] = "Mehedi";
    // strcpy(st1.name, name);

    // print_student(st1);

    int n;
    printf("Number of Student in the class : ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 1; i <= n; i++) {
        printf("Input Student %d Info\n", i);
        students[i - 1] = input_Student();
    }

    for (int i = 1; i <= n; i++) {
        printf("Student %d", i);
        print_student(students[i - 1]);
    }
}