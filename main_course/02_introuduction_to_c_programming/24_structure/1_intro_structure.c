#include <stdio.h>

struct Date {
    int day, month, year;
};

int main() {
    struct Date date1, date2;

    printf("Enter person 1's birthday : ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter person 2's birthday : ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if (date1.day == date2.day &&
    date1.month == date2.month &&
    date1.year == date2.year) {
        printf("Same");
    }
    else {
        printf("Not same");
    }
}