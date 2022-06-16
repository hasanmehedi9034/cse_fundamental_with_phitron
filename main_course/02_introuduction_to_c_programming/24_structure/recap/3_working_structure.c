#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int days_in_month[12] = {31, 28, 31, 30, 31, 30,31, 30,31, 30, 31};

int main() {
   struct Date start;
   scanf("%d %d %d", &start.day, &start.month, &start.year);
   
   struct Date next_date = start;

   if (next_date.day != days_in_month[next_date.month - 1]) {
       next_date.day++;
   }
   else {
       next_date.day = 1;
       next_date.month++;
   }

   printf("%d-%d-%d\n", next_date.day, next_date.month, next_date.year);
}