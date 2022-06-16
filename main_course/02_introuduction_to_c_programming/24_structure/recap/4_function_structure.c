#include <stdio.h>
#include <stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

int days_in_month[12] = {31, 28, 31, 30, 31, 30,31, 30,31, 30, 31};

bool is_first_day(struct Date date) {
    return (date.day == 1 && date.month == 1);
}

struct Date get_first_day(int year) {
    struct Date ans = {1, 1, year};
    return ans;
}

void print_date (struct Date date) {
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

struct Date get_next_date(struct Date date) {
    struct Date next_date = date;

    if (next_date.day != days_in_month[date.month - 1]) {
        next_date.day++;
        // printf("%d\n", next_date.day);
    }
    else if (next_date.month != 12) {
        next_date.day = 1;
        next_date.month++;
    }
    else {
        next_date.day = 1;
        next_date.month = 1;
        next_date.year++;
    }
    return next_date;
}

int main() {
    struct Date start = {1, 1, 2022};

    struct Date current = start;
    for (int i = 0; i < 100; i++) {
        current = get_next_date(current);
        print_date(current);
    }
    
}