#include <stdio.h>

int main() {
    FILE *inputFile = fopen("log2.txt", "r");

    FILE *logFile = fopen("log.txt", "a");
    if (inputFile ==  NULL) {
        fprintf(logFile, "Input File Not Founded\n");
        return 0;
    }
    fprintf(logFile, "Hello log file at 12:00 AM\n");
}