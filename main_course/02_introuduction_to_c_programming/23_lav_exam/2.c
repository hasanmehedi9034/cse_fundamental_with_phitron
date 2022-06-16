#include <stdio.h>

int f(int n, int a[]) {
     int cnt = 0;
     for (int i=0; i<n; i++) {
         if (a[i] == a[0]) cnt++;
    }
    return cnt;
}

int main() {
    int a[] = {0, 0, 1, 2, 1};
    printf("%d", f(5, a));
}

/*

the funciton finds how many time is the first element of the array and return vaule is 3;

*/
