#include <stdio.h>
#include <stdbool.h>

int main()
{

    int value = -23;
    if (value > 0)
    {
        printf("A ");
        if (value % 5 == 0)
        {
            printf("B ");
        }
        else
        {
            printf("C ");
        }
    }
    else
    {
        printf("D ");
        if (value % 5 == 0)
        {
            printf("E ");
        }
        else
        {
            printf("F ");
        }
    }

    int value2 = 33;
    if (value2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}