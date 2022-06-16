#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "mehedi"; // if you want this string take from user use scanf funciton.
    char find_letter = 'm'; // same here
    int string_len = strlen(string);

    int frequent_array[100] = {0};

    for (int i = 0; i < string_len; i++) {
        if (string[i] == find_letter) {
            frequent_array[i] = i + 1;
        }
    }

    for(int i = 0; i < string_len; i++) {
        if (frequent_array[i] != 0) {
            printf("position of this letter : %d\n", frequent_array[i]);
        }
    }
}