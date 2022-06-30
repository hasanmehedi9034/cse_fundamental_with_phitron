#include <stdio.h>

struct Person {
    char name[100];
    int val;
};

void print_struct(struct Person st) {
    printf("Name: %s, Marks: %d\n", st.name, st.val);
}

struct Person get_min (int n, struct Person p[]) {
    int min_value = p[0].val;
    int min_index = 0;
    for (int i = 0; i < n; i++) {
        if (min_value > p[i].val) {
            min_value = p[i].val;
            min_index = i;
        }
    }
    return p[min_index];
}

int main() {
    FILE *input_file = fopen("random.txt", "r");
    if (input_file == NULL) {
        printf("file not founded\n");
        return 0;
    }
    int n;
    fscanf(input_file, "%d", &n);

    struct Person persons[n];
    for (int i = 0; i < n; i++) {
        fscanf(input_file, "%s %d", &persons[i].name, &persons[i].val);
    }

    struct Person p = get_min(n, persons);
    print_struct(p);
    fclose(input_file);
}