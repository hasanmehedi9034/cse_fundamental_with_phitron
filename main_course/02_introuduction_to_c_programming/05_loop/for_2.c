// #include <stdio.h>

// int main() {

//     printf("i \t j \n");

//     for (int i = 1, j = 9; i <= j; i++, j--) {
//         printf("%d \t %d \n", i, j);
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int i = 1, j = 9;

    printf("i \t j \n");

    for ( ; i <= j; i++, j--) {
        printf("%d \t %d \n", i, j);
    }

    printf("At end %d %d \n", i, j);

    return 0;
}

