#include <stdio.h>
#include <stdbool.h>

int main() {

    while (true) {
        int n;
        printf("Enter 0/1 : ");
        scanf("%d", &n);
        
        if(n == 0 || n == 1) {
            printf("Your entered %d", n);
            break;
        }
        else {
            printf("Wrong input, try again.\n");
        }
    }
}