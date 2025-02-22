/*Write a C program to convert a given Binary number to its Decimal equivalent*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int dec = 0, base = 1;
    while (n > 0) {
        dec += (n % 10) * base;
        n /= 10;
        base *= 2;
    }
    printf("Decimal is %d\n", dec);
    return 0;
}