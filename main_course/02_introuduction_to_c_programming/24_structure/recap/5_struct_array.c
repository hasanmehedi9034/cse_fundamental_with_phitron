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
    struct Date date_of_birth;
};

void print_date (struct Date date) {
    printf("%d-%d-%d", date.day, date.month, date.year);
}

void print_student (struct Student st) {
    printf("Name : %s, Class : %d, Roll : %d, Date of Birth : ", st.name, st.class, st.roll);
    print_date(st.date_of_birth);
}

struct Date input_date () {
    struct Date date;

    scanf("%d %d %d", &date.day, &date.month, &date.year);
}

struct Student input_student() {
    struct Student st;

    printf("Name : ");
    gets(st.name);
    gets(st.name);

    printf("Class : ");
    scanf("%d", &st.class);

    printf("Roll : ");
    scanf("%d", &st.roll);

    printf("Date of Birth : ");
    st.date_of_birth = input_date(st.date_of_birth);

    return st;
}

int main() {
    int n;
    printf("Number of Student of the class : ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 1; i <= n; i++) {
        printf("Input student %d info \n", i);
        students[i - 1] = input_student();
    }

    for (int  i = 0; i <= n; i++) {
        printf("Student %d info : ", i);
        print_student(students[i - 1]);
    }    
}