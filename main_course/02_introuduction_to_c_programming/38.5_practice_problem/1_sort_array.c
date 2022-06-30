#include <stdio.h>

struct Person {
    char name[100];
    int val1;
    int val2;
};

void take_struct_input (struct Person person) {
    scanf("%s %d %d", &person.name, &person.val1, &person.val2);
}

void structure_sort(int n, struct Person p[]) {
    for (int i = 0; i < n; i++) {
        int min_value = p[i].val2;
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (min_value > p[j].val2) {
                min_value = p[j].val2;
                min_index = j;
            }
        }
        struct Person temp = p[i];
        p[i] = p[min_index];
        p[min_index] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct Person persons[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", &persons[i].name, &persons[i].val1, &persons[i].val2);
    }

    structure_sort(n, persons);

    printf("-----------\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d %d\n", persons[i].name, persons[i].val1, persons[i].val2);
    }
}