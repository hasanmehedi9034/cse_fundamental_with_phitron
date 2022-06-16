#include <stdio.h>

int main() {
    // input
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int lowest_1;
    int lowest_2;

    if(a <= b && a <= c) {
        lowest_1 = a;

        if(b <= c) {
            lowest_2 = b;
        }
        else {
            lowest_2 = c;
        }
    }
    else if (b <= a && b <= c) {
        lowest_1 = b;

        if(a <= c) {
            lowest_2 = a;
        }
        else {
            lowest_2 = c;
        }
    }
    else {
        lowest_1 = c;

        if(a <= b) {
            lowest_2 = a;
        }
        else {
            lowest_2 = b;
        }
    }
    int total_minimun_price = lowest_1 + lowest_2;

    printf("%d", total_minimun_price);


    return 0;
}