#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int max_value_of_array = array[0];
    for(int j = 1; j < n; j++) {
        if (max_value_of_array < array[j]) {
            max_value_of_array = array[j];
        }
    }

    int answer = 0;
    for (int k = 0; k < n; k++) {
        if (max_value_of_array == array[k]) continue;

        if (max_value_of_array != array[k]) {
            answer += max_value_of_array - array[k];
        }
    }

    printf("%d", answer);

    return 0;
}