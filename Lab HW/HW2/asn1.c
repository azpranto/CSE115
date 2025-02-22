/*Write a C program to input sides of a triangle and check whether triangle is valid or not (Hint: if sum of
any two sides of a triangle is greater than the third side then the triangle is valid)*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("Triangle is valid\n");
    } else {
        printf("Triangle is not valid\n");
    }

    return 0;
}