#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date today = {28, 5, 2022};
    today = (struct Date) {1, 2, 3};

    today.day = 21;
    today.month = 22;
    today.year = 2022;
}