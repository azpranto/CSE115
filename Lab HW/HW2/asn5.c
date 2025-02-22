/*Write a C program that reads the radius r of a circle and the side a of a square from user and then
checks if that square can be placed inside that circle or not. Hint: Use Pythagorean theorem.*/

#include <stdio.h>
#include <math.h>

int main() {
    float r, a;

    printf("Enter radius of a circle and side of a square: ");
    scanf("%f %f", &r, &a);

    if (sqrt(2) * a <= r * 2) {
        printf("Square can be placed inside the circle\n");
    } else {
        printf("Square cannot be placed inside the circle\n");
    }

    return 0;
}