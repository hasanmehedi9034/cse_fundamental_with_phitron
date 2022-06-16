#include <stdio.h>
#include <string.h>

int main() {
    char input_string[] = "I love Philtron";
    int size = strlen(input_string);
    int vowles = 0;
    int consonent = 0;
    int space = 0;

    for (int i = 0; i < size; i++) {
        if (input_string[i] == 'a' || input_string[i] == 'e' || input_string[i] == 'i' || input_string[i] == 'o' || input_string[i] == 'u' || input_string[i] == 'A' || input_string[i] == 'E' || input_string[i] == 'I' || input_string[i] == 'O' || input_string[i] == 'U') {
            vowles++;
        }
        else {
            consonent++;
        }

        if (input_string[i] == " ") {
            space++;
        }
    }

    printf("Total vowels : %d\n", vowles);
    printf("Total consonent : %d\n", consonent - space);



    return 0;
}