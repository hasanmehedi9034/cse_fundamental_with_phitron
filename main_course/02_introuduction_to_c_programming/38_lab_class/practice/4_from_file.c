#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    char name[100];
    int id;
    int marks;
};

struct Unique_student {
    char name[100];
    int id;
    int total;
};

int main() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");
    if (input_file == NULL) {
        fprintf(output_file, "file not founded\n");
        return 0;
    }

    int n;
    fscanf(input_file ,"%d", &n);

    struct Student students[n];
    struct Unique_student unique_students[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        fscanf(input_file, "%s %d %d", &students[i].name, &students[i].id, &students[i].marks);
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (students[i].id == unique_students[j].id) {
                unique_students[j].total += students[i].marks;
                found = true;
            }
        }
        if (!found) {
            strcpy(unique_students[k].name, students[i].name);
            unique_students[k].id= students[i].id;
            unique_students[k].total = students[i].marks;
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        int max_value = unique_students[i].total;
        int max_index = i;
        for (int j = i + 1; j < k; j++) {
            if (max_value < unique_students[j].total) {
                max_value = unique_students[j].total;
                max_index = j;
            }
        }
        struct Unique_student temp = unique_students[i];
        unique_students[i] = unique_students[max_index];
        unique_students[max_index] = temp;
    }

    for (int i = 0; i < k; i++) {
        fprintf(output_file, "%d. %s %d %d\n", (i + 1), unique_students[i].name, unique_students[i].id, unique_students[i].total);
    }
}