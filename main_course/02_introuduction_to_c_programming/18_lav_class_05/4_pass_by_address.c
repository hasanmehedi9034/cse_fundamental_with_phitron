#include <stdio.h>

int make_equal_to_average(int *pa, int *pb) {
    int avg = (*pa + *pb) / 2;
    *pa = *pb = avg;
}

int make_positive(int pa) {
    if (pa < 0) {
        pa = -pa;
    }
    return pa;
}

int main() {
    // int a = -10;
    // a = make_positive(a);

    // printf("%d", a);
    
    int a = 9, b = 7;
    make_equal_to_average(&a, &b);
    printf("%d %d", a, b);
}
