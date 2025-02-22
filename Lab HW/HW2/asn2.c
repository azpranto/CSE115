/*Write a C program to input all angles of a triangle and check whether triangle is valid or not. (Hint: sum
of all angles of any triangle is 180 degrees)*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter angles of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b + c == 180) {
        printf("Triangle is valid\n");
    } else {
        printf("Triangle is not valid\n");
    }

    return 0;
}