#include <stdio.h>

int get_sum(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main(){

    FILE *output_file = fopen("total_sum.txt", "a");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);
        int a[m];
        int sum = get_sum(m, a);

        fprintf(output_file, "case %d : %d\n", i + 1, sum);
    }
    fclose(output_file);
}