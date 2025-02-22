/*Write a C program to compute the super-factorial of a given number 𝒏, 𝒔𝒇(𝒏) = 𝟏! ∗ 𝟐! ∗ 𝟑! ∗ ...𝒏!*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int sf = 1;
    for (int i = 1; i <= n; i++) {
        int f = 1;
        for (int j = 1; j <= i; j++) {
            f *= j;
        }
        sf *= f;
    }
    printf("Super factorial of %d is %d\n", n, sf);
    return 0;
}