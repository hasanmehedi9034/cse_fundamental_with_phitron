#include <stdio.h>

int fun(int a,int b) {
    int ans=1;

    for(int i=1;i<=b;i++) {
        ans*=a;
    }
    return ans;
}

int main() {
    // printf("%d",fun(3, 5));

int i = 5;

    printf("%d %d %d", i++, i++, i++);

}