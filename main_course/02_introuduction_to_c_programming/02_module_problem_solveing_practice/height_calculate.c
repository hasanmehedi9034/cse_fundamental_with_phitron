#include <stdio.h>

int main() {

    int height = 65;
    int feet = height / 12;
    int inch = height % 12;


    printf("Your height is %d feet and %d inch", feet, inch);

    return 0;
}