#include <stdio.h>
#include <stdbool.h>

int main() {

    int number_of_subjects;
    scanf("%d", &number_of_subjects);

    int total_grade_point = 0;
    bool failed = false;

    for (int i = 1; i <= number_of_subjects; i++) {
        int marks, grade_point;
        scanf("%d", &marks);

        if(marks >= 80) {
            printf("Grade = A+\n");
            printf("Grade Point = 5\n");
            grade_point = 5;
        }
        else if(marks >= 70) {
            printf("Grade = A\n");
            printf("Grade Point = 4\n");
            grade_point = 4;
        }
        else if(marks >= 60) {
            printf("Grade = B\n");
            printf("Grade Point = 3\n");
            grade_point = 3;
        }
        else if(marks >= 50) {
            printf("Grade = C\n");
            printf("Grade Point = 2\n");
            grade_point = 2;
        }
        else if(marks >= 40) {
            printf("Grade = D\n");
            printf("Grade Point = 1\n");
            grade_point = 1;
        }
        else {
            printf("Grade = D\n");
            printf("Grade Point = 0 \n");   
            grade_point = 0;
            failed = true;
        }

        total_grade_point += grade_point;
    }

    if(failed) {
        printf("Your are Failed!\nYour GPA 0.00");
    }
    else {
        double final_gpa = (double)total_grade_point / (double)number_of_subjects;
        printf("You are Passed\nYour GPA %.2lf", final_gpa);
    }


    return 0;
}