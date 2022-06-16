#include <stdio.h>

const char *string_return (int n, double m) {
    return "m";
}

int main() {
    
    printf("%s", string_return(1, 2));
}