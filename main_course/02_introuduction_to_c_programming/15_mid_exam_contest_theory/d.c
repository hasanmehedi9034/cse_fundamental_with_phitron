#include <stdio.h>

int main() {
    char object_name[1000];
    scanf("%s", object_name);

    if (object_name[0] >= 97 && object_name[0] <= 122) {
        object_name[0] = object_name[0] + ('A' - 'a');
    }

    printf("%s", object_name);

    return 0;
}
