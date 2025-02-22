/*Write a C program to print the first n palindrome numbers where n is an input.*/

#include <stdio.h>

int main() {
    int n, i, j, num, rev, temp;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("First %d palindrome numbers:", n);
    for (i = 1; n > 0; i++) {
        num = i;
        rev = 0;
        temp = num;
        while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (num == rev) {
            printf("%d, ", num);
            n--;
        }
    }
    return 0;
}