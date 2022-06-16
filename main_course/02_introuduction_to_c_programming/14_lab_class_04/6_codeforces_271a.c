#include <stdio.h>
#include <stdbool.h>

int main() {
    int year;
    scanf("%d", &year);

    for (int y = year + 1; ; y++) {
        int current_year = y;
        int fr[10] = {0};
        bool repeat = false;

        while (current_year > 0) {
            int d = current_year % 10;
            current_year /= 10;
            fr[d]++;

            if (fr[d] >= 2) {
                repeat = true;
            }
        }

        if (!repeat) {
            printf("%d\n", y);
            break;
        }
    }

    return 0;
}