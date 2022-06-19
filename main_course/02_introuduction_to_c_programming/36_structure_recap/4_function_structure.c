#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void func (struct Student *st) {
    // (*st).marks = 90;
    st -> marks = 901;
}

void print_structure(struct Student st) {
    printf("%s %d %d\n", st.name, st.roll, st.marks);
}

int main() {
    struct Student a = {.name = "Rakib", .roll = 21, .marks = 83};
    func(&a);
    print_structure(a);
}