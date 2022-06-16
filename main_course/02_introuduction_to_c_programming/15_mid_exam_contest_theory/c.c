#include <stdio.h>
#include <string.h>

int main() {
    int bead_number;
    scanf("%d", &bead_number);

    char sequence_of_bead[bead_number];
    scanf("%s", &sequence_of_bead);

    int answer = 0;
    char test_bead = sequence_of_bead[0];
    for (int i = 1; i < strlen(sequence_of_bead); i++) {
        if (test_bead != sequence_of_bead[i]) {
            test_bead = sequence_of_bead[i];
            continue;
        }
        else {
            answer++;
        }
    }
    
    printf("%d", answer);
    return 0;
}
