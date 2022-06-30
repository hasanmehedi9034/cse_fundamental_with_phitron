#include <stdio.h>

int main() {
    FILE *fp = fopen("donation.txt", "w");

    int n;
    scanf("%d", &n);

    char name[100];
    int donation_amount;
    int total = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %d", &name, &donation_amount);
        fprintf(fp, "Name: %s, donation: %d\n", name, donation_amount);
        total += donation_amount;
    }
    fprintf(fp, "total donation: %d", total);

    char b[200];
    
    fclose(fp);
}