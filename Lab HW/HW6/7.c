/*Write a C program to compute the sum of the series: 1/1! + 1/2! + 1/3! + ... + 1/n! where n is an input.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double fact = 1;
        for(int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += 1.00 / fact;
    }
    printf("Sum of the series is %lf\n", sum);
    return 0;
}