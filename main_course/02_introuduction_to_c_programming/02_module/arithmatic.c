#include <stdio.h>

int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int jogfol = num1 % num2;

    // printf("%d + %d = %d \n", num1, num2, jogfol);
    printf("%d %% %d = %d \n", num1, num2, jogfol);

    return 0;
}