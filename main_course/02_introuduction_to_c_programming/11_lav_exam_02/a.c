#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, k, a;
    /*
        n = total number of people
        k = total number of gift
        a = start giving gift with this number of person 
    */

    scanf("%d %d %d", &n, &k, &a);

    for (int i = 1; i <= k; i++) {
        if(i == k) printf("%d", a);
        if(a <= n) a++;
        if(a > n) a = 1;
    }

    // printf("%d", a);

    return 0;
}