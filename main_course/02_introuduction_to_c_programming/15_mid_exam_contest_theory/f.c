#include <stdio.h>
#include <stdbool.h>

int main() {
    long long int number;
    scanf("%lld", &number);

    long long int current = number;

    int good_digit_count = 0;
    while (current > 0) {
        int digit = current % 10;
        current /= 10;

        if (digit == 7 || digit == 4) good_digit_count++;
    }
    
    if (good_digit_count == 4) {
        printf("YES");
    }
    else if (good_digit_count == 7) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}