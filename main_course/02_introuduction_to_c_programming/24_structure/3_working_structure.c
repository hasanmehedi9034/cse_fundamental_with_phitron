#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date getNextDate(struct Date date) {
    struct Date next_date = date;

    if (next_date.day != days_in_month[next_date.month - 1]) {
        next_date.day++;
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
};

void print_date(struct Date date) {
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

int main() {
    struct Date start;

    printf("Start Date : ");
    scanf("%d %d %d", &start.day,&start.month, &start.year);

    int days;
    printf("How many Days : ");
    scanf("%d", &days);

    struct Date current = start;
    for (int i = 0; i < days; i++) {
        current = getNextDate(current);
        printf("%dth day : ", i + 1);
        print_date(current);
    }
}