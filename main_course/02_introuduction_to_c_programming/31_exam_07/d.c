#include <stdio.h>

void print_number(int n, int a[])
{
    int fr[10] = {0};

    for (int i = 0; i < n; i++)
    {
        fr[a[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (fr[i] >= 3)
        {
            printf("%d\n", i);
            return;
        }
    }
    printf("%d\n", -1);
}

void input_array(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int main()
{
    int array_element;
    scanf("%d", &array_element);

    int ar[array_element];

    input_array(array_element, ar);
    print_number(array_element, ar);
}