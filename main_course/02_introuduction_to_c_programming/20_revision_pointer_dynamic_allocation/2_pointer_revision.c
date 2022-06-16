#include <stdio.h>

int main() {
    double var = 2;
    printf("%p %lld\n", &var, &var);

    double var2;
    printf("%p %lld\n", &var2, &var2);

    double *pvar = &var;
    printf("%p %lld\n", pvar, pvar);
    pvar++;
    printf("%p %lld", pvar, pvar);
}