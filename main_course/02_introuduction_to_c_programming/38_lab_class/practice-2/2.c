#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Student {
    char name[100];
    int id;
    int marks;
};

struct Unique {
    char name[100];
    int id;
    int total;
};

int main() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");
    if (input_file == NULL) {
        printf("file not founded.\n");
        return 0;
    }

    int n;
    fscanf(input_file, "%d", &n);

    struct Student students[n];
    struct Unique unique[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        fscanf(input_file, "%s %d %d", &students[i].name, &students[i].id, &students[i].marks);
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (students[i].id == unique[j].id) {
                unique[j].total += students[i].marks;
                found = true;
            }
        }
        if (!found) {
            strcpy(unique[k].name, students[i].name);
            unique[k].id = students[i].id;
            unique[k].total = students[i].marks;
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        int max_value = unique[i].total;
        int max_index = i;
        for (int j = i + 1; j < k; j++) {
            if (max_value < unique[j].total) {
                max_index = j;
                max_value = unique[j].total;
            }
        }
        struct Unique temp = unique[i];
        unique[i] = unique[max_index];
        unique[max_index] = temp;
    }

    for (int i = 0; i < k; i++) {
        fprintf(output_file, "%d. %s %d %d\n", (i + 1), unique[i].name, unique[i].id, unique[i].total);
    }
}