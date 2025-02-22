/*Write a C program to compute and print the sum of palindrome numbers between m and n*/

#include <stdio.h>

int main() {
    int m, n, i, j, num, rev, temp, sum = 0;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = m; i <= n; i++) {
        num = i;
        rev = 0;
        temp = num;
        while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (num == rev) {
            sum += num;
        }
    }
    printf("Sum of palindrome numbers between %d and %d: %d\n", m, n, sum);
    return 0;
}