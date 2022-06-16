// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char test_string[] = "hello";
    char reverse_string[5] = {};
    int j = 4;
    for (int i = 0; i < 5; i++) {
        reverse_string[i] = test_string[j];
        j--;
    }
    reverse_string[5] = '\0';
    
    puts(reverse_string);
    
    return 0;
}