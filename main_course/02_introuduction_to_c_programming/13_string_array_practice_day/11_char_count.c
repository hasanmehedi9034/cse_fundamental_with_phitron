#include <stdio.h>
#include <string.h>

int main() {

    char input_string[] = "I love programming. I love Philtron.";
    int len = strlen(input_string);
    char search_char = 'o';
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (input_string[i] == search_char) {
            count++;
        }
    }
    printf("%d", count);
}