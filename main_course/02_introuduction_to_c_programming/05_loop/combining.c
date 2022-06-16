#include <stdio.h>

// int main() {
//     int count = 0;
//     for (int i=1, j=1; i+j<=10; i++, j++) {
//         count++;
//     }
//     printf("%d", count);

//     return 0;
// }

int main() {
	// int n;
	// scanf("%d", &n);
	// int sum = 0;
	// for (int i=1; i<=n; i++) {
    // 	sum += i;
	// }
	// printf("%d", sum);
    int count = 0;
    for (int i=0; i<3; i++) {
    	for (int j=0; j<5; j++) {
        	printf("*");
            count++;
    	}
	}
    printf("%d", count);
}