#include <stdio.h>
#include <stdbool.h>

int main(){
    int year;
    scanf("%d", &year);

    for (int y = year + 1; ; y++) {
        int current_year = y;
        int frequent[10] = {0};
        bool repeat = false;

        while (current_year > 0) {
            int digit = current_year % 10;
            current_year /= 10;
            frequent[digit]++;

            if (frequent[digit] >= 2) {
                repeat = true;
            }
        }

        if (!repeat) {
            printf("%d", y);
            break;
        }
    }
}

