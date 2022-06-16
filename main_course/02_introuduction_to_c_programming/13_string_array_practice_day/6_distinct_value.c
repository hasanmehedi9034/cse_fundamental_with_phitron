#include <stdio.h>

int main() {
    int ara[100] = {0};
    int elements[] = {10, 20, 50, 40, 50, 10, 40};

    for (int i = 0; i <= 6; i++) {
        int x = elements[i];
        ara[x]++;
    }

    for (int i = 0; i < 100; i++) {
        if (ara[i] != 0) {
            printf("%d occurs %d times\n", i, ara[i]);
        }
    }



    return 0;
}