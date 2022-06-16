#include <stdio.h>

int main() {
    int principal, time;
    float rate;

    printf("Enter principle : ");
    scanf("%d", &principal);
    
    printf("Enter time : ");
    scanf("%d", &time);

    printf("Enter rate : ");
    scanf("%f", &rate);

    float interest = ((float)principal * (float)time * rate) / 100;

    printf("%.1f", interest + principal);

    return 0;
}