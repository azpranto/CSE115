/*Write a C program to print the n-th perfect number where n is an input*/

#include <stdio.h>

int main() {
    int n, i, j, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The %d-th perfect number:", n);
    for (i = 1; n > 0; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            n--;
        }
    }
    printf("%d\n", i - 1);
    return 0;
}