/*Write a C program to compute the quadruple factorial of a given number 𝒏, 𝒒(𝒏) = (𝟐𝒏)!/𝒏! */

#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int qn = 1;
    for (int i = 2 * n; i > n; i--) {
        qn *= i;
    }
    printf("Quadruple factorial of %d is %d\n", n, qn);
    return 0;
}