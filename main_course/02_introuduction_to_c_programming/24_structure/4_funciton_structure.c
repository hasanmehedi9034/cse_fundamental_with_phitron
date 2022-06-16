#include <stdio.h>
#include <stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Date getFirstDay (int year) {
    struct Date ans = {1, 1, year};
    return ans;
};

int getMonth(struct Date date) {
    return date.month;
}

int isFirstDay(struct Date date) {
    return date.day == 1 && date.month == 1;
}

void print_date(struct Date date) {
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

int main() {
    struct Date date = getFirstDay(2040);
    print_date(date);

    // if (isFirstDay(date)) {
    //     printf("Happy new year");
    // }
}