/* Write a C program to find the Greatest Common Divisor (GCD ) of two given integers. GCD of two integers is the highest number that totally divides those two integers. E.g. GCD of 15 and 25 is 5*/

#include <stdio.h>

int gcd(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}