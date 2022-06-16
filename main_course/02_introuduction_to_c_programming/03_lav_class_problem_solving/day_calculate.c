#include <stdio.h>

int main() {

    int days;
    scanf("%d", &days);

    int year = days / 365;

    int month = (days % 365) / 30;
    int day = (days % 365) % 30;

    printf("%d year(s)\n%d month(s)\n%d day(s)", year, month, day);

    return 0;
}