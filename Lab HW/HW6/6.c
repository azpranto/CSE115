/*Write a C program to convert a given decimal number to its binary equivalent*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int bin = 0, base = 1;
    while (n > 0) {
        bin += (n % 2) * base;
        n /= 2;
        base *= 10;
    }
    printf("Binary is %d\n", bin);
    return 0;
}