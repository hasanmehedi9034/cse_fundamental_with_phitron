#include <stdio.h>
#include <string.h>

#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE * (2 -1)

int rotate_left (int a, unsigned int rotate){
    rotate = INT_BITS;
}

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);

    int left = a << b;
    int right = a >> b;

}

/*

mab - most significant bit
lsb - less significant bit
*/