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
    struct Date dob;
};

struct Result {
    int vagfol;
    int vagsesh;
};

struct Pair {
    int value1;
    int value2;
};

struct Result divide(int x, int y) {
    return (struct Result) {x / y, x % y};
}

int main() {
    int a = 5, b = 3;
    struct Result result = divide(a, b);
    printf("%d %d", result.vagfol, result.vagsesh);
}