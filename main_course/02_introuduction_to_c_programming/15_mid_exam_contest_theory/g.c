#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    char str[101];
    scanf("%d", &t);

    while(t--) {
        scanf("%s",&str);
        int len = strlen(str);
        printf("%c",str[0]);

        for(int i = 1; i < len; i += 2){
            printf("%c",str[i]);
        }
        printf("\n");
    }
}