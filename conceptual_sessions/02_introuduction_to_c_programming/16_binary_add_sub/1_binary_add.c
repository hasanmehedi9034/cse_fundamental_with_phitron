#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum[100];

    int index = 0;
    int reminder = 0;
    while (a != 0 || b != 0) {
        sum[index] = ((a % 10) + (b % 10) + reminder) % 2;
        reminder = ((a % 10) + (b % 10) + reminder) / 2;
        printf("reminder : %d\n", reminder);
        a /= 10;
        b /= 10;
        index++;
    }
    if (reminder) {
        sum[index] = reminder;
    }

    while (index >= 0) {
        printf("%d", sum[index]);
        index--;
    }
}