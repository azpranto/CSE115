/*Write a C program to compute and print the sum of first n perfect numbers.*/

#include <stdio.h>

int main() {
    int n, i, j, sum, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of first %d perfect numbers:", n);
    for (i = 1; n > 0; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            count += i;
            n--;
        }
    }
    printf("%d\n", count);
    return 0;
}
