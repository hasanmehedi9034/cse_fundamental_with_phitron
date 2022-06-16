#include <stdio.h>

int main() {

    for (int i = 1; i <= 60; i++) {
        if(60 % i == 0) continue;
        
        printf("%d, ", i);
    }

    return 0;
}