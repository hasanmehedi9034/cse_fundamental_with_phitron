#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[] = {3, 2, 1, 4, 5, 6, 0, 7};
   
    for (int i = 0; i < (sizeof(n) / sizeof(n[0])); i++) {
        for (int j = i + 1; j < (sizeof(n) / sizeof(n[0])); j++) {
            if((n[i] + n[j] == 6)) {
                printf("%d + %d = %d\n", n[i], n[j], 6);
            }
        }
    }
}
