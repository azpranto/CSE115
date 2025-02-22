/*Write a C program to print all palindrome numbers between m and n (m, n are inputs). For e.g. 121 is a
palindrome since the reverse of 121 = 121; but 152 is not a palindrome.*/

#include <stdio.h>

int main() {
    int m, n, i, j, num, rev, temp;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("All palindrome numbers between %d and %d:", m, n);
    for (i = m; i <= n; i++) {
        num = i;
        rev = 0;
        temp = num;
        while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (num == rev) {
            printf("%d, ", num);
        }
    }
    return 0;
}

