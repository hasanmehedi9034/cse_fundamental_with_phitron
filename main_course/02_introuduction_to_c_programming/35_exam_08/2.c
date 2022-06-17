#include <stdio.h>

void input_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

double make_average(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    double avg = (double)sum / (double)n;
    return avg;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    input_array(n, a);

    printf("%0.2lf", make_average(n, a));
}