#include <stdio.h>

int main(){
    char str1[] = "bangla", str2[] = "desh", str3[13];

    int lenght1 = 6, lenght2 = 4;

    for (int i = 0; i < lenght1; i++) {
        str3[i] = str1[i];
    }


    for (int i = 0; i < lenght2; i++) {
        str3[lenght1 + i] = str2[i];
    }
    str3[lenght1 + lenght2] = '\0';

    printf("%s", str3);

    return 0;
}