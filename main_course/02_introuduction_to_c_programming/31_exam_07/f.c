#include <stdio.h>

int main()
{
    int number_of_test;
    scanf("%d", &number_of_test);

    for (int k = 0; k < number_of_test; k++)
    {
        int string_len;
        scanf("%d", &string_len);

        char str[string_len];
        scanf("%s", &str);

        int count = 0;
        int i;
        for (i = 0; i < string_len; i++)
        {
            if (str[i] == '8')
            {
                count++;
                break;
            }
        }

        for (int j = i; j < string_len; j++)
        {
            count++;
        }

        if (count >= 11)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}