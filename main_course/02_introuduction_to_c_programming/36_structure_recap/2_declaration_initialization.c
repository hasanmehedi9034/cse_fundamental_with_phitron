#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
    int last_marks[100];
};

int main() {
    struct Student a = {"Rakib", .marks = 92, .roll = 2};
    strcpy(a.name, "Akib");
}