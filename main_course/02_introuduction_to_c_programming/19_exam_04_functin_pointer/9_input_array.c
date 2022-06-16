#include<stdio.h>  
  
int main() { 
    // int k;
    // scanf("%d", &k);

    // int a[k], *pt;
    // for(int i = 0; i < k; i++)  
    //     scanf("%d", &a[i]);  
    //     // scanf("%d", *pt);
  
    // pt = &a[k- 1];  
  
    // printf("\nreverse order \n");  
    // for(int i = 0; i < k; i++)  
    //     printf("%d\n", *pt--);  

    int arr[100];
    int size;
    int *first_element = arr;

    scanf("%d", &size);
    int *last_element = arr[size - 1];
  

    return 0;  
}