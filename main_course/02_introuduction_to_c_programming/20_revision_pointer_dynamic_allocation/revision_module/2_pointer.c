#include <stdio.h>

int main() {
    int var = 10;
    int *pvar = &var;

    printf("%lld %d\n", pvar, *pvar);

    pvar += 10;
    printf("%lld %d\n", pvar, *pvar);
}