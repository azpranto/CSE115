/* Write a C program to check if an input integer is a multiple of either 2 or 5 but not a multiple of both.
E.g. of valid numbers are 4, 6, 8, 12, 14, 15, 16, 25, etc. E.g. of invalid numbers are 1, 3, 7, 9, 10, 20, etc.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 2 == 0 || num % 5 == 0) && !(num % 2 == 0 && num % 5 == 0)) {
        printf("Valid number\n");
    } else {
        printf("Invalid number\n");
    }

    return 0;
}