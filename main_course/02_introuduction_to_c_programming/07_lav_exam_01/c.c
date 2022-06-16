#include <stdio.h>

int main() {
    // input
    int collected_temparature;
    scanf("%d", &collected_temparature);

    int below_zero = 0;

    for (int i = 1; i <= collected_temparature; i++) {
        int temparature;
        scanf("%d", &temparature);

        if(temparature < 0) {
            below_zero = below_zero + 1;
        }
    }

    printf("%d", below_zero);

    return 0;
}